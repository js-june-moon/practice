// Variable Length Array
#pragma warning(disable:4996)

#include <stdio.h>

int main(void) {
	const int nSize = 32;
	char szName[nSize];

	gets(szName);
	puts(szName);

	return 0;
}