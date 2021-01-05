#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);

	printf("%d\n", _msize(pszData)); // LINUX, UNIX: malloc_usable_size()

	free(pszData);

	return 0;
}