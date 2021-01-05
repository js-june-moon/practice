#include <stdio.h>

int main(void) {
	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	while (*pszData != '\0') {
		pszData++;
	}

	printf("Length: %d\n", pszData - szBuffer);

	return 0;
}