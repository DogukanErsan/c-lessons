#include <iostream>
using namespace std;
int main()
{
	cout << "Rakamlar:" << endl;
	int result = 1;


	for (int i = 1;i < 11;i++) {
		result *= i;
		cout << i << endl;

	}
	cout << "Toplam Deger:" << result << endl;
	return 0;
}
