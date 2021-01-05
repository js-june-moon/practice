#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

int GetFee(int nAge) {
	int nFee = 1000;
	if(nAge < 20)
		nFee /= 2;

	return nFee;
}

int PrintMenu(void) {
	int nInput = 0;

	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf("%d", &nInput);

	return nInput;
}

int GetAge(void) {
	int nAge = 0;
	printf("나이를 입력하세요.: ");
	scanf("%d", &nAge);

	return nAge;
}

int main(void) {
	int nMenu = 0, nAge = 0;

	while((nMenu = PrintMenu()) != 0) {
		if (nMenu == 1) {
			nAge = GetAge();
			printf("요금은 %d원 입니다.\n", GetFee(nAge));
			_getch();
		}
	}

	puts("Bye~~!");

	return 0;
}