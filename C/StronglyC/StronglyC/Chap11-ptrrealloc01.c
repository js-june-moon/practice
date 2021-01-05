#pragma warning(disable:4996)

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
	char* pszBuffer = NULL, * pszNewBuffer = NULL;

	pszBuffer = (char*)malloc(12);
	sprintf(pszBuffer, "%s", "TestString");
	printf("[%p] %d %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);

	pszNewBuffer = (char*)realloc(pszBuffer, 32);
	if (pszNewBuffer == NULL) {
		free(pszBuffer);
	}
	
	sprintf(pszNewBuffer, "%s", "TestStringData");
	printf("[%p] %d %s\n", pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

	free(pszNewBuffer);

	return 0;
}