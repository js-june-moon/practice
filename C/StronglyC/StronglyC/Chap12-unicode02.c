#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	wchar_t* pwszData = L"String";
	char szData[32];
	size_t nConverted = 0;

	nConverted = wcstombs(NULL, pwszData, 32);
	printf("%d\n", nConverted);

	nConverted = wcstombs(szData, pwszData, 32);
	printf("%s (%d)\n", szData, nConverted);

	return 0;
}