#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME 20		// �̸��� �ִ� ����
#define MAXLEN 100		// �迭�� �ִ� ũ�� (���� ������ ������ ����)

/////////////////////////////////////////////////////////////

typedef struct Account {
	int accountNumber;	// ���¹�ȣ
	char name[MAXNAME];	// ���̸�
	int balance;		// ���ܾ�
}Account;

/////////////////////////////////////////////////////////////

void CreateAccount(Account* acnt, int cnt);	// 1. ���°���
void Desposit(Account* acnt, int cnt);		// 2. �Ա�
void Withdraw(Account* acnt, int cnt);		// 3. ���
void PrintBalance(Account* acnt, int cnt);	// 4. ��ü�� �ܾ���ȸ