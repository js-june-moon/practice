#include <stdio.h>

//a�� "a"(���ڿ�)�� �����ϴ� ��ũ�� ����
#define STRING(a) #a

//a�� b�� ���� �ϳ��� �ٿ��ִ� ��ũ�� ����
#define PASTER(a, b) a##b

int main(void) {
	int nData = 10;

	printf("%d\n", PASTER(nDa, ta));
	printf("%d\n", nData);

	printf("%s\n", STRING(nData));

	return 0;
}