#include <iostream>
using namespace std;
int main()
{
	cout << "Rakamlar:" << endl;
	int result = 0;


	for (int i = 0;i < 10;i++) {
		result += i;
		cout << i << endl;

	}
	cout <<"Toplam Deger:" << result << endl;
	return 0;
}