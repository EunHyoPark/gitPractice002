#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "caculate.h"
#include "greeting.h"
#include "select.h"

int main() {
	//�λ� part
	greet();
	//������ �ְ� ��ȣ �Է¹޴� input part
	int selection = slec();
	//��� part
	cal(selection);
	return 0;
}