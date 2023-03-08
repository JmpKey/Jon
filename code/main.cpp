#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main(void)
{
	int i = 0, j = 0;
	char str0[16];
	char str1[16];
	char str2[16];

	int ss = 0;
	std::cin >> ss;

	for (i = 0; i < ss; i++) {
		for (j = 0; j < ss; j++) {
			printf("%s + %s = %s\n", itoa(i, str0, ss), itoa(j, str1, ss), itoa(i + j, str2, ss));
		};
		printf("\n");
	};
	for (i = 0; i < ss; i++) {
		for (j = 0; j < ss; j++) {
			printf("%s * %s = %s\n", itoa(i, str0, ss), itoa(j, str1, ss), itoa(i * j, str2, ss));
		};
		printf("\n");
	};

	system("pause");
	return(0);
}
