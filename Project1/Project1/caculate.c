#define _CRT_SECURE_NO_WARNINGS
#include "caculate.h"
#include <stdio.h>


void cal(int selection) {
	int result=0;
	int a=0, b=0;
	if (selection == 1) {
		scanf("%d %d", &a, &b);
		result = add(a, b);
		printf("%d", result);
	}
}
int add(int num1, int num2) {
	return num1 + num2;
}