#include "bank.h"

void ViewMenu(void);

Account account[MAXLEN];

int main(void) {
	ViewMenu();

	return 0;
}

void ViewMenu(void) {
	int choice = 0;
	int count = 0;
	for (;;) {
		printf("-----Menu-----\n");
		printf("1. 계좌계설\n");
		printf("2. 입    금\n");
		printf("3. 출    금\n");
		printf("4. 계좌정보 전체 출력\n");
		printf("5. 프로그램 종료\n");
		printf("선택: ");
		scanf("%d%*c", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			CreateAccount(&account, count);
			++count;
			break;
		case 2:
			Desposit(&account, count);
			break;
		case 3:
			Withdraw(&account, count);
			break;
		case 4:
			PrintBalance(&account, count);
			break;
		case 5:
			return;
		default:
			printf("다시 입력해주세요.\n");
		}
	}
}