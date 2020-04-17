#include <stdio.h>
#include "../include/my_putchar.h"


void print_sizeof() {
	printf("int: %ld \n", sizeof(int));
	printf("float: %ld \n", sizeof(float));
	printf("double: %ld \n", sizeof(double));
	printf("char: %ld \n", sizeof(char));
}


int main() {
	my_putchar('A');
	return 0;
}
