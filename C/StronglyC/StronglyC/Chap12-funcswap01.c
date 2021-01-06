#include <stdio.h>

void Swap(int* pLeft, int* pRight) {
	int nTmp = *pLeft;
	*pLeft = *pRight;
	*pRight = nTmp;
}

int main(void) {
	int x = 10, y = 20;

	Swap(&x, &y);

	printf("%d %d\n", x, y);

	return 0;
}