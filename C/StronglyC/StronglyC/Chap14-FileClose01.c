#pragma warning(disable:4996)

#include <stdio.h>

void main(void) {
	FILE* fp = NULL;
	int nClosed = 0;

	fopen("Test1.txt", "w");
	fopen("Test2.txt", "w");
	fopen("Test3.txt", "w");

	nClosed = _fcloseall();
	printf("%d\n", nClosed);
}