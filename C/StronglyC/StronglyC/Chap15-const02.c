#pragma warning(disable:4996)

#include <stdio.h>

int main(void) {
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("점수를 입력하세요.: ");
	scanf("%d", &nInput);

	if (nInput >= nCUTOFF) {
		printf("합격입니다.\n");
	}
	else {
		printf("불합격입니다.\n");
	}

	return 0;
}