#pragma warning(disable:4996)

#include "bank.h"
#include <iostream>

using namespace std;

void ViewMenu(void);

Account* account[MAXLEN];

int main(void) {
	int id = 0;
	char name[MAXNAME] = { 0, };
	int balance = 0;

	for (int i = 0; i < MAXLEN; i++) {
		account[i] = new Account(id, name, balance);
	}

	ViewMenu();

	return 0;
}

void ViewMenu(void) {
	int choice = 0;
	int count = 0;
	for (;;) {
		cout << "-----Menu-----\n";
		cout << "1. ���°輳\n";
		cout << "2. ��    ��\n";
		cout << "3. ��    ��\n";
		cout << "4. �������� ��ü ���\n";
		cout << "5. ���α׷� ����\n";
		cout << "����: ";
		cin >> choice;
		cout << "\n";

		switch (choice) {
		case 1:
			account[count]->CreateAccount(count);
			++count;
			break;
		case 2:
			account[count]->Desposit(account, count);
			break;
		case 3:
			account[count]->Withdraw(account, count);
			break;
		case 4:
			account[count]->PrintBalance(account, count);
			break;
		case 5:
			return;
		default:
			cout << "�ٽ� �Է����ּ���.\n";
		}
	}
}