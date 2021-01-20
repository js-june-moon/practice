#ifndef __BANK_H_
#define __BANK_H_

#define MAXNAME 20		// �̸��� �ִ� ����
#define MAXLEN 100		// �迭�� �ִ� ũ�� (���� ������ ������ ����)

class Account {
private:
	int accountNumber;	// ���¹�ȣ
	char *name;	// ���̸�
	int balance;		// ���ܾ�
public:
	Account(int id, char* inname, int bal);

	void CreateAccount(int cnt);	// 1. ���°���
	void Desposit(Account* act[], int cnt);			// 2. �Ա�
	void Withdraw(Account* act[], int cnt);			// 3. ���
	void PrintBalance(Account *act[], int cnt);		// 4. ��ü�� �ܾ���ȸ

	int GetAccNum();
	char* GetName();
	int GetBalance();

	void SetAccNum(int num);
	void SetName(char inname[]);
	void SetBalance(int bal);
};

#endif