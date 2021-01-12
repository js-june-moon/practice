#include "bank.h"

void CreateAccount(Account* acnt, int cnt) {
	printf("[계좌개설]\n");
	
	printf("계좌ID: ");
	scanf("%d%*c", &acnt[cnt].accountNumber);
	
	printf("이  름: ");
	scanf("%s", acnt[cnt].name);
	
	printf("입금액: ");
	scanf("%d%*c", &acnt[cnt].balance);

	printf("\n");
}

void Desposit(Account* acnt, int cnt) {
	int id = 0;
	int balance = 0;
	
	printf("[입    금]\n");

	printf("계좌ID: ");
	scanf("%d%*c", &id);
	
	printf("입금액: ");
	scanf("%d%*c", &balance);

	for (int i = 0; i < cnt; ++i) {
		if (acnt[i].accountNumber == id) {
			acnt[i].balance += balance;
			printf("\n");
			return 0;
		}
	}
}

void Withdraw(Account* acnt, int cnt) {
	int id = 0;
	int balance = 0;

	printf("[출    금]\n");

	printf("계좌ID: ");
	scanf("%d%*c", &id);

	printf("출금액: ");
	scanf("%d%*c", &balance);

	for (int i = 0; i < cnt; ++i) {
		if (acnt[i].accountNumber == id) {
			acnt[i].balance -= balance;
			printf("\n");
			return 0;
		}
	}
}

void PrintBalance(Account* acnt, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("계좌ID: %d\n", acnt[i].accountNumber);
		printf("이  름: %s\n", acnt[i].name);
		printf("잔  액: %d\n", acnt[i].balance);
		printf("\n");
	}
}