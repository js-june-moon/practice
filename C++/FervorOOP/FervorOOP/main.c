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
		printf("1. ���°輳\n");
		printf("2. ��    ��\n");
		printf("3. ��    ��\n");
		printf("4. �������� ��ü ���\n");
		printf("5. ���α׷� ����\n");
		printf("����: ");
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
			printf("�ٽ� �Է����ּ���.\n");
		}
	}
}