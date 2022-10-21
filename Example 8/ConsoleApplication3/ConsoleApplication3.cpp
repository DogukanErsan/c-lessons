#include <iostream>
using namespace std;

int myFunc_1(int a, int b);
int myFunc_2(int c, int d);

int main()
{
	int res = myFunc_1(3, 5);
	int res = myFunc_2(19, 26);
}
int myFunc_1(int a, int b)
{
	cout << int(a)+int(b);
	return 0;
}
int myFunc_2(int c, int d)
{
	cout << int(c) * int(d);
	return 0;
}

