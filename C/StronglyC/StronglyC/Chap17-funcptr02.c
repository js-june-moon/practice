#include <stdio.h>

int GetMax(int a, int b, int c) {
	int nMax = a;

	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;

	return nMax;
}

int __cdecl main(void) {
	int(__cdecl * pfGetMax)(int, int, int) = GetMax;

	printf("MAX: %d\n", pfGetMax(1, 2, 3));

	return 0;
}