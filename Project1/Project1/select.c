#define _CRT_SECURE_NO_WARNINGS
#include "select.h"
#include <stdio.h>

int slec() {
	int num = 0;
	printf("원하는 기능 숫자를 입력하시고 enter 후 두 숫자를 입력해주세요.");
	printf("1. 더하기\n");
	printf("2. 빼기\n");
	printf("3. 곱하기\n");
	printf("4. 나누기\n");
	scanf("%d", &num);
	return num;
}