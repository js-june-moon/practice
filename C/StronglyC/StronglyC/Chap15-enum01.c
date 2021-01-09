#include <stdio.h>

enum ACTION { MOVE, JUMP, ATACK };

typedef enum COLOR { RED = 100, GREEN, BLUE }COLOR;

int main(void) {
	enum ACTION act = MOVE;
	COLOR color = GREEN;

	printf("ACTION: %d, COLOR: %d\n", act, color);

	return 0;
}