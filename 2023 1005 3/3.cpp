#include <iostream>
using namespace std;

static int mult(int a, int b)
{
	return a * b;
}

int main()
{
	int a = 0;
	int b = 0;
	cout << "数字を２つ入力してください" << endl;
	cin >> a >> b;
	cout << "掛け算した答えは" << mult(a, b) << "です" << endl;
}