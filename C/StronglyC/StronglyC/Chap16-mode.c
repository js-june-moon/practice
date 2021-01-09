#include <stdio.h>

#ifdef _DEBUG
#define MODEMESSAGE "Debug mode"
#else
#define MODEMESSAGE "Release Mode"
#endif

int main(void) {
	puts(MODEMESSAGE);

	return 0;
}