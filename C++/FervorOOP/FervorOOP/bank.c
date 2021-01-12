#include "bank.h"

void CreateAccount(Account* acnt, int cnt) {
	printf("[���°���]\n");
	
	printf("����ID: ");
	scanf("%d%*c", &acnt[cnt].accountNumber);
	
	printf("��  ��: ");
	scanf("%s", acnt[cnt].name);
	
	printf("�Աݾ�: ");
	scanf("%d%*c", &acnt[cnt].balance);

	printf("\n");
}

void Desposit(Account* acnt, int cnt) {
	int id = 0;
	int balance = 0;
	
	printf("[��    ��]\n");

	printf("����ID: ");
	scanf("%d%*c", &id);
	
	printf("�Աݾ�: ");
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

	printf("[��    ��]\n");

	printf("����ID: ");
	scanf("%d%*c", &id);

	printf("��ݾ�: ");
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
		printf("����ID: %d\n", acnt[i].accountNumber);
		printf("��  ��: %s\n", acnt[i].name);
		printf("��  ��: %d\n", acnt[i].balance);
		printf("\n");
	}
}