#pragma warning(disable:4996)

#include <iostream>
#include "bank.h"
#include <cstring>

using namespace std;

Account::Account(int id, char* inname, int bal) 
	:accountNumber(id), balance(bal)
{
	this->name = new char[strlen(inname) + 1];
	strcpy(this->name, inname);
}

void Account::CreateAccount(int cnt) {
	int id = 0;
	char name[MAXNAME] = { 0, };
	int balance = 0;

	cout << "[°èÁÂ°³¼³]\n";

	cout << "°èÁÂID: ";
	cin >> id;

	cout << "ÀÌ  ¸§: ";
	cin >> name;

	cout << "ÀÔ±Ý¾×: ";
	cin >> balance;

	cout << "\n";

	this->SetAccNum(id);
	this->SetName(name);
	this->SetBalance(balance);
}

void Account::Desposit(Account* act[], int cnt) {
	int id = 0;
	int balance = 0;
	Account* temp;

	cout << "[ÀÔ    ±Ý]\n";

	cout << "°èÁÂID: ";
	cin >> id;

	cout << "ÀÔ±Ý¾×: ";
	cin >> balance;

	for (int i = 0; i < cnt; ++i) {
		temp = act[i];
		if (act[i]->GetAccNum() == id) {
			balance += act[i]->GetBalance();
			act[i]->SetBalance(balance);
			cout << "\n";
			break;
		}
	}
}

void Account::Withdraw(Account* act[], int cnt) {
	int id = 0;
	int balance = 0;
	Account* temp;

	cout << "[Ãâ    ±Ý]\n";

	cout << "°èÁÂID: ";
	cin >> id;

	cout << "Ãâ±Ý¾×: ";
	cin >> balance;

	for (int i = 0; i < cnt; ++i) {
		temp = act[i];
		if (act[i]->GetAccNum() == id) {
			balance = act[i]->GetBalance() - balance;
			act[i]->SetBalance(balance);
			cout << "\n";
			break;
		}
	}
}

void Account::PrintBalance(Account *act[], int cnt) {
	Account* temp;
	for (int i = 0; i < cnt; i++) {
		temp = act[i];
		cout << "°èÁÂID: " << temp->GetAccNum() << endl;
		cout << "ÀÌ  ¸§: " << temp->GetName() << endl;
		cout << "ÀÜ  ¾×: " << temp->GetBalance() << endl;
		cout << "\n";
	}
}

int Account::GetAccNum() {
	return this->accountNumber;
}
char* Account::GetName() {
	return this->name;
}
int Account::GetBalance() {
	return this->balance;
}

void Account::SetAccNum(int num) {
	this->accountNumber = num;
}
void Account::SetName(char inname[]) {
	strcpy(this->name, inname);
}
void Account::SetBalance(int bal) {
	this->balance = bal;
}