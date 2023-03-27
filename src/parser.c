#include "calc.h"

int parser(char *str, char *result) {
	char *str_buf = NULL;
	dot_replacement(str);
	str_buf = strdup(str);
	char *p = str_buf;
	int error = OK;
	int num_flag_err = 0;
	int char_flag_err = 0;
	printf("%s\n", str_buf);
	if (*str_buf == '+' || *str_buf == '-') { //если строка начинается с унарного + или -
		result[0] = '0';
	}
	while (*str_buf) {
		if (error == INCORRECT_EXPRESSION) break;
		if (strchr(VALID_CHARACTERS, *str_buf) == NULL) { //проверка каждого символа на валидность
			error = INCORRECT_EXPRESSION;
			break;
		}
		if (isdigit(*str_buf) || *str_buf == '.') { //если символ - цифра
			if (num_flag_err == INCORRECT_EXPRESSION) {
				error = INCORRECT_EXPRESSION;
			}
			get_number(&str_buf, result); // помещаем число в результирующую строку
			num_flag_err = INCORRECT_EXPRESSION;
		} else { //если символ - символ
			if (*str_buf == '(' && (*(str_buf+1) == '+' || *(str_buf+1) == '-') 
								&& (isdigit(*(str_buf+2)) || strchr("sctbnvqzo", *(str_buf+2)) != NULL)) { //если скобка а за ней унарный оператор(обработка краевой ситуации)
				strcat(result, "((0");
				result[strlen(result)] = *(str_buf+1);
				str_buf += 2;
				char aboba[50];
				sprintf(aboba, "%f", strtod(str_buf, &str_buf));
				strcat(result, aboba);
				result[strlen(result)] = ')';
				continue;
			}
			result[strlen(result)] = get_character(&str_buf, &char_flag_err); //помещаем символ в результирующую строку
			if (char_flag_err == INCORRECT_EXPRESSION) {
				error = INCORRECT_EXPRESSION;
			}
			num_flag_err = OK;
		}
	}
	if (!error) {
		if (check_correct_string(result) == INCORRECT_EXPRESSION) {
			error = INCORRECT_EXPRESSION;
		}
	}
	printf("after parser: %s\n", result);
	free(p);
	return error ? INCORRECT_EXPRESSION : OK;
}

int check_correct_string(char *str) { //обработка возможных ошибок в строке после парсинга
	int status = OK;
	char *ptr = str;
	while (*ptr) {
		if (status == INCORRECT_EXPRESSION) break;
		if ((strchr("+-*/^", *ptr) != NULL) && (strchr("+-*/^", *(ptr+1)) != NULL)) { //если в строке идут подряд два оператора
			status = INCORRECT_EXPRESSION;
		} else if (*ptr == ')' && (strchr("+-*/^)", *(ptr+1)) == NULL && *(ptr+1) != '\0')) { //после скобки должен быть оператор или конец строки
			status = INCORRECT_EXPRESSION;
		} else if (*ptr == 'm' && (!isdigit(*(ptr+1)) && *(ptr+1) != '(') && (!isdigit(*(ptr-1)) && *(ptr-1) != '(')) { //между функцией мод обязанны быть два числа или скобки
			status = INCORRECT_EXPRESSION;
		} else if (strchr("+-*/^", *ptr) != NULL && (*(ptr+1) == ')' || *(ptr+1) == '\0')) {
			status = INCORRECT_EXPRESSION;
		} else if (*ptr == 'x' && (strchr("+-*/^)", *(ptr+1)) == NULL || strchr("+-*/^(", *(ptr-1)) == NULL)) {
			status = INCORRECT_EXPRESSION;
		}
		//  && ((*(ptr-1)) != '(' || *(ptr-1) != ')')
		// (isdigit(*(ptr+1)) || isdigit(*(ptr-1)))
		ptr++;
	}
	return status;
}

char get_character(char **str, int *err) {
	char res = 0;
	if (strchr("+-*/^x", **str) != NULL) { //если текущий символ оператор +-*/^x
		char tmp = **str;
		(*str)++;
		return tmp;
	} else if (strchr("cstalm", **str) != NULL) { //если текущий символ начало функции
		res = get_function(str);
		if (res == '!') *err = 1; //некорректный ввод
	} else if (**str == '(' || **str == ')') { //если текущий символ скобка ()
		char tmp = **str;
		(*str)++;
		return tmp;
	} else if (**str == 'm') { //если текущий символ 'm'(если это mod)
		if (*(*str-1) != ')' && !isdigit(*(*str-1)) && *(*str-1) != 'x') { //если предыдущий символ не цифра или ')' то ошибка
			*err = 1;
		} else {
			res = get_function(str);
		}
	} else if (strchr("cstalm", **str) == NULL) {
		*err = 1;
	}
	return res;
}

char get_function(char **str) {
	char res = '!';
	if (strchr("cst", **str) != NULL && *(*str+1) != 'q') { //если это тригонометрическая функция
		res = get_triginometric_func(str);
	} else if (**str == 'a') { //если это обратная тригонометрическая функция
		res = get_inverse_triginometric_func(str);
	} else if (**str == 's' && *(*str+1) == 'q') { //если это корень
		res = get_sqrt_func(str);
	} else if (**str == 'l') { //если это логарифм
		res = get_log_func(str);
	} else if (**str == 'm') { //если это мод
		res = get_mod_func(str);
	}
	return res;
}

char get_mod_func(char **str) {
	char res = '!';
	char buff[4];
	strncpy(buff, *str, 3);
	buff[3] = '\0';
	if (strcmp("mod", buff) == 0) {
		*str = *str + 3;
		res = 'm';
	}
	return res;
}

void get_number(char **str, char *result) {
	double num = add_number_to_str(str);
	char buff[50];
	sprintf(buff, "%.13f", num);
	strcat(result, buff);
}

char get_log_func(char **str) {
	char res = '!';
	char buff_ln[4];
	char buff_log[5];
	strncpy(buff_ln, *str, 3);
	strncpy(buff_log, *str, 4);
	buff_ln[3] = '\0';
	buff_log[4] = '\0';
	if (strcmp("ln(", buff_ln) == 0) {
		*str = *str + 2;
		res = 'z'; //возвращаем z если в строке корректный ln()
	} else if (strcmp("log(", buff_log) == 0) {
		*str = *str + 3;
		res = 'o'; //возвращаем x если в строке корректный log()
	}
	return res;
}

char get_sqrt_func(char **str) {
	char res = '!';
	char buff[6];
	strncpy(buff, *str, 5);
	buff[5] = '\0';
	if (strcmp("sqrt(", buff) == 0) {
		*str = *str + 4;
		res = 'q'; //возвращаем q если в строке корректный sqrt()
	}
	return res;
}

char get_inverse_triginometric_func(char **str) {
	char res = '!';
	char buff[6];
	strncpy(buff, *str, 5);
	buff[5] = '\0';
	if (strcmp("acos(", buff) == 0) {
		*str = *str + 4;
		res = 'b'; //возвращаем b если в строке корректный acos()
	} else if (strcmp("asin(", buff) == 0) {
		*str = *str + 4;
		res = 'n'; //возвращаем n если в строке корректный asin()
	} else if (strcmp("atan(", buff) == 0) {
		*str = *str + 4;
		res = 'v'; //возвращаем v если в строке корректный atan()
	}
	return res;
}

char get_triginometric_func(char **str) {
	char res = '!';
	char buff[5];
	strncpy(buff, *str, 4);
	buff[4] = '\0';
	if (strcmp("sin(", buff) == 0) {
		*str = *str + 3;
		res = 's'; //возвращаем s если в строке корректный sin()
	} else if (strcmp("cos(", buff) == 0) {
		*str = *str + 3;
		res = 'c'; //возвращаем c если в строке корректный cos()
	} else if (strcmp("tan(", buff) == 0) {
		*str = *str + 3;
		res = 't'; //возвращаем t если в строке корректный tan()
	}
	return res;
 }

double add_number_to_str(char **pointer) {
	return strtod(*pointer, pointer);
}

void dot_replacement(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == '.') {
			str[i] = ',';
		}
		i++;
	}
}