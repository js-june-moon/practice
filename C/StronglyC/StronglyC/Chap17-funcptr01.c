#include <stdio.h>

int __cdecl main(void) {
	void* pData = main;

	printf("%p\n", main);
	printf("%p\n", pData);

	return 0;
}