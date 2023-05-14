#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "caculate.h"
#include "greeting.h"
#include "select.h"

int main() {
	//인사 part
	greet();
	//선택지 주고 번호 입력받는 input part
	int selection = slec();
	//계산 part
	cal(selection);
	return 0;
}