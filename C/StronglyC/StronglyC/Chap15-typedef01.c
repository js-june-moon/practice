#include <stdio.h>

typedef unsigned int UINT;
typedef const char* LPSTR;

int main(void) {
	UINT uData = 10;
	LPSTR pszData = NULL;

	pszData = "HelloWorld";

	printf("%s\n", pszData);
	printf("%u\n", uData);

	return 0;
}