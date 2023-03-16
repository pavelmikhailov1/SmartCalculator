#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define OPERAND   	 0
#define NUMBER 	  	 1
#define OK     	 	 0
#define ERROR     	 1
#define ERROR_CH    '!'
#define VALID_CHARACTERS "1234567890.()+-*/^modcsintaqrtlgx "

int add_spases_betwin_leksems(char *str, char **result);
void skipping_number(char **str, char **result);

int main(int argc, char const *argv[])
{
	
	return 0;
}

int add_spases_between_leksems(char *str, char **result) {
	int error = OK;
	if (*str == '+' || *str == '-') { //если строка начинается с унарного + или -
		result[0] = '0';
	}
	while (*str)
	{
		if (strchr(VALID_CHARACTERS, *str) == NULL) { //проверка каждого символа на валидность
			error = ERROR;
		}
		if (isdigit(*str)) {

		}
	}
	
}

void skipping_number(char **str, char **result) {
	char buff[50];
	int flag_err = 0;
	for (int i = 0; isdigit(**str) || **str == '.'; i++) {
		if ()
		buff[i] = **str;
	}
	
}
