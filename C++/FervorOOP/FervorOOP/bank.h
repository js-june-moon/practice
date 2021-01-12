#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME 20		// 이름의 최대 길이
#define MAXLEN 100		// 배열의 최대 크기 (개설 가능한 계좌의 개수)

/////////////////////////////////////////////////////////////

typedef struct Account {
	int accountNumber;	// 계좌번호
	char name[MAXNAME];	// 고객이름
	int balance;		// 고객잔액
}Account;

/////////////////////////////////////////////////////////////

void CreateAccount(Account* acnt, int cnt);	// 1. 계좌개설
void Desposit(Account* acnt, int cnt);		// 2. 입금
void Withdraw(Account* acnt, int cnt);		// 3. 출금
void PrintBalance(Account* acnt, int cnt);	// 4. 전체고객 잔액조회