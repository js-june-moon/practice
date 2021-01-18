#include <iostream>

using namespace std;

class SimpleClass {
private:
	int num;

public:
	void InitNum(int n) {
		num = n;
	}

	int GetNum() const {
		return num;
	}

	void ShowNum() const {
		cout << GetNum() << endl;
	}
};

class EasyClass {
private:
	int num;

public:
	void InitNum(int n) {
		num = n;
	}

	int GetNum() const {
		return num;
	}
};

class LiveClass {
private:
	int num;
public:
	void InitNum(const EasyClass& easy) {
		num = easy.GetNum();
	}
};