#ifndef __BANK_H_
#define __BANK_H_

#define MAXNAME 20		// 이름의 최대 길이
#define MAXLEN 100		// 배열의 최대 크기 (개설 가능한 계좌의 개수)

class Account {
private:
	int accountNumber;	// 계좌번호
	char *name;	// 고객이름
	int balance;		// 고객잔액
public:
	Account(int id, char* inname, int bal);

	void CreateAccount(int cnt);	// 1. 계좌개설
	void Desposit(Account* act[], int cnt);			// 2. 입금
	void Withdraw(Account* act[], int cnt);			// 3. 출금
	void PrintBalance(Account *act[], int cnt);		// 4. 전체고객 잔액조회

	int GetAccNum();
	char* GetName();
	int GetBalance();

	void SetAccNum(int num);
	void SetName(char inname[]);
	void SetBalance(int bal);
};

#endif