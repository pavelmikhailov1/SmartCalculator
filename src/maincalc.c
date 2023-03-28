#include "calc.h"

// typedef union Value
// {
// 	__int128_t val_int;
// 	double     val_double;
// } size_of_memory;

// typedef enum Enum {
// 	PLUS,  //0
// 	MINUS, //1
// } operands;

// void remove_spases(char *str, char **result);
// void remove_spases(char *str, char **result) {
// 	char *p = str;
// 	int i = 0;
// 	while (*p != '\0') {
// 		if (*p != ' ') {
// 			*((*result)+i) = *p;
// 			i++;
// 		} else {
// 		}
// 		p++;
// 	}
// }


// int main(int argc, char const *argv[])
// {
// 	double result = 0.0;
// 	t_node_value* head_value = NULL;
// 	t_node_oper* head_oper = NULL;
// 	printf("result %d\n", calculator("25/3*sqrt(5)", &result, 22));
// 	printf("value %f\n", result);
// 	//5-x*2*(sin(cos(tan(-3+5)*sqrt(5+2^3))))
// 	//"1+cos(sin(5) + 1)"
// 	// /2.-5*6-(sqrt(2mod5))

// 	// while (head_value != NULL)
// 	// {
// 		// printf("%d\n", head_value->val);
// 	// 	head_value = head_value->previos;
// 	// }
	
// 	return 0;
// }

void print_error_message(int error) {

}

int calculator(char *str, double* result, double x) {
	char *buff = (char *)calloc(4096, sizeof(char));
	char *polish_str = (char *)calloc(4096, sizeof(char));
	int error = OK;
	error = parser(str, buff);
	
	if (error == OK) {
		error = infix_to_polish(buff, polish_str, x);
		if (error == OK) {
			error = calculate_polish_notation(polish_str, result);
		}
	}
	if (error == ERROR_CAlCULATION) {
		
	}
	free(buff);
	free(polish_str);
	return error;
}

int calculate_polish_notation(char* polish_str, double* result) {
	t_node_value* head_value = NULL;
	double num = 0.0;
	char sep[] = " ";
	char* ptr = NULL;
	int error = OK;
	ptr = strtok(polish_str, sep);

	while (ptr != NULL) {
		if (isdigit(*ptr) || (*ptr == '-' && isdigit(*(ptr+1))) || (*ptr == '+' && isdigit(*(ptr+1)))) {
			num = add_number_to_str(&ptr);
			head_value = (t_node_value*)push((void*)head_value, (void*)&num, 0, NUMBER);
		} else {
			if (error = calculate_values(&head_value, *ptr));
		}
		ptr = strtok(NULL, sep);
	}
	*result = head_value->val;
	free(head_value);

	printf("result c: %f\n", *result);
	return error;
}

int calculate_values(t_node_value** head_value ,char ch) {
	int error = OK;
	if (strchr(BINARY_OPERATORS, ch) != NULL) {
		error = definition_operator_and_calculate(head_value, ch);
	} else if (strchr(FUNCTIONS, ch) != NULL) {
		error = definition_function_and_calculate(head_value, ch);
	}
	return error;
}

int definition_function_and_calculate(t_node_value** head_value ,char ch) {
	double value = get_value_and_delete_node(head_value);
	double result = 0.0;
	int error = OK;
	switch(ch) {
	case 's':
		result = sin(value);
		break;
	case 'c':
		result = cos(value);
		break;
	case 't':
		result = tan(value);
		break;
	case 'b':
		result = acos(value);
		break;
	case 'n':
		result = asin(value);
		break;
	case 'v':
		result = atan(value);
		break;
	case 'q':
		result = sqrt(value);
		break;
	case 'z':
		result = log(value);
		break;
	case 'o':
		result = log10(value);
		break;
	}
	if (result != result) {
		error = ERROR_CAlCULATION;
		*head_value = (t_node_value*)push((void*)*head_value, (void*)&result, 0, NUMBER);
	} else {
		*head_value = (t_node_value*)push((void*)*head_value, (void*)&result, 0, NUMBER);
	}
	return error;
}

int definition_operator_and_calculate(t_node_value** head_value ,char ch) {
	double value1 = get_value_and_delete_node(head_value); //берем первое число из стека
	double value2 = get_value_and_delete_node(head_value); //берем второе число из стека
	double result = 0.0;
	int error = OK;
	if (value1 == 0.0 && (ch == '/' || ch == 'm')) error =  ERROR_CAlCULATION;
	switch (ch) {
	case '+':
		result = value2 + value1;
		break;
	case '-':
		result = value2 - value1;
		break;
	case '*':
		result = value2 * value1;
		break;
	case '/':
		result = value2 / value1;
		break;
	case '^':
		result = pow(value2, value1);
		break;
	case 'm':
		result = fmod(value2, value1);
		break;
	}
	*head_value = (t_node_value*)push((void*)*head_value, (void*)&result, 0, NUMBER);
	return error;
}

double get_value_and_delete_node(t_node_value** head_value) {
	double value = (*head_value)->val;
	// printf("aboba%f\n", value);
	*head_value = (t_node_value*)pop((void*)*head_value, NUMBER);
	return value;
}
