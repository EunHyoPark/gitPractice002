#define _CRT_SECURE_NO_WARNINGS
#include "select.h"
#include <stdio.h>

int slec() {
	int num = 0;
	printf("���ϴ� ��� ���ڸ� �Է��Ͻð� enter �� �� ���ڸ� �Է����ּ���.");
	printf("ex) 1 enter 10 50 => �����");
	printf("1. ���ϱ�\n");
	printf("2. ����\n");
	printf("3. ���ϱ�\n");
	printf("4. ������\n");
	scanf("%d", &num);
	return num;
}