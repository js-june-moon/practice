#include <stdio.h>

int TestFunc(void) {
	static int nData = 10;
	
	++nData;

	return nData;
}

int main(void) {
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());

	return 0;
}