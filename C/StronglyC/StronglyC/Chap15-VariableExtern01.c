#include <stdio.h>

void InitCounter(int nData);
void IncreaseCounter();

extern int g_nCounter;

void main(void) {
	InitCounter(10);
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
}