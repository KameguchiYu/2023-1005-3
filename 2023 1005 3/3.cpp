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
	cout << "�������Q���͂��Ă�������" << endl;
	cin >> a >> b;
	cout << "�|���Z����������" << mult(a, b) << "�ł�" << endl;
}