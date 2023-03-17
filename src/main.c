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
double CalculatePolishNotation(char* polish_str);
int CalculateValues(t_node_value** head_value ,char ch);
int DefinitionOperatorAndCalculate(t_node_value** head_value ,char ch);
int DefinitionFunctionAndCalculate(t_node_value** head_value ,char ch);
double GetValueAndDeleteNode(t_node_value** head_value);
// void Addition(t_node_value* head_value);

int main(int argc, char const *argv[])
{
	t_node_value* head_value = NULL;
	t_node_oper* head_oper = NULL;
	printf("result %f\n", calculator("2.-5*6-(sqrt(2mod5))"));
	//"1+cos(sin(5) + 1)"
	// /2.-5*6-(sqrt(2mod5))

	// while (head_value != NULL) 
	// {
		// printf("%d\n", head_value->val);
	// 	head_value = head_value->previos;
	// }
	
	return 0;
}

double calculator(char *str) {
	char *buff = (char *)calloc(1000, sizeof(char));
	char *polish_str = (char *)calloc(1000, sizeof(char));
	int status = OK;
	printf("%s\n", buff);
	status = parser(str, buff);
	
	if (status == OK) {
		status = infix_to_polish(buff, polish_str);
	}
	printf("%s\n", polish_str);

	CalculatePolishNotation(polish_str);

	free(buff);
	free(polish_str);
	return status;
}

double CalculatePolishNotation(char* polish_str) {
	t_node_value* head_value = NULL;
	double result = 0.0;
	double num = 0.0;
	char sep[] = " ";
	char* ptr = NULL;
	ptr = strtok(polish_str, sep);
	while (ptr != NULL)
	{
		if (isdigit(*ptr)) {
			// printf("%s\n", ptr);
			num = add_number_to_str(&ptr);
			head_value = (t_node_value*)push((void*)head_value, (void*)&num, 0, NUMBER);
		} else {
			CalculateValues(&head_value, *ptr);
		}
		ptr = strtok(NULL, sep);

	}
	printf("%f\n", head_value->val);
	// while (head_value != NULL) {
	// 	printf("%f\n", head_value->val);
	// 	head_value = head_value->next;
	// }
	
	// free(ptr);
	return result;
}

int CalculateValues(t_node_value** head_value ,char ch) {
	int error = OK;
	if (strchr(BINARY_OPERATORS, ch) != NULL) {
		error = DefinitionOperatorAndCalculate(head_value, ch);
	} else if (strchr(FUNCTIONS, ch) != NULL) {
		error = DefinitionFunctionAndCalculate(head_value, ch);
	}
}

int DefinitionFunctionAndCalculate(t_node_value** head_value ,char ch) {
	double value = GetValueAndDeleteNode(head_value);
	double result = 0.0;
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
	*head_value = (t_node_value*)push((void*)*head_value, (void*)&result, 0, NUMBER);
	return OK;
}

int DefinitionOperatorAndCalculate(t_node_value** head_value ,char ch) {
	double value1 = GetValueAndDeleteNode(head_value); //берем первое число из стека
	double value2 = GetValueAndDeleteNode(head_value); //берем второе число из стека
	double result = 0.0;
	if (value1 == 0.0 && (ch == '/' || ch == 'm')) return ERROR; //обработка ошибки деления на 0
	// char* (*func[5]) (t_node_value*) = {Addition, };
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
	return OK;
}

double GetValueAndDeleteNode(t_node_value** head_value) {
	double value = (*head_value)->val;
	// printf("aboba%f\n", value);
	*head_value = (t_node_value*)pop((void*)*head_value, NUMBER);
	return value;
}
