#include <stdio.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	//printf("%d\n", szBuffer == pszData);
	//printf("%d\n", "TestString" == pszData);
	//printf("%d\n", "DataString" == "TestString");

	printf("%d\n", strcmp(szBuffer,  pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString"));

	return 0;
}