#include <stdio.h>
#include "../include/my_putchar.h"

int main() {
	printf("int: %ld \n", sizeof(int));
	printf("float: %ld \n", sizeof(float));
	printf("double: %ld \n", sizeof(double));
	printf("char: %ld \n", sizeof(char));
	return 0;
}
