#pragma warning(disable:4996)

#include <stdio.h>

int main(void) {
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("������ �Է��ϼ���.: ");
	scanf("%d", &nInput);

	if (nInput >= nCUTOFF) {
		printf("�հ��Դϴ�.\n");
	}
	else {
		printf("���հ��Դϴ�.\n");
	}

	return 0;
}