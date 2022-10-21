#include <iostream>
using namespace std;

int main()
{
	int userVal = 0;
	string userValStr = "";
	srand(time(NULL));
	int rndNumber = rand() % 100;
	cout << "Rastgele uretilen deger: " << rndNumber << "\n";

	cout << "Please enter integer value: ";
	cin >> userVal;

	cout << "Please enter a text: ";
	cin >> userValStr;
	cout << "Entered integer Value by the user is: " << userVal << "\n";
	cout << "Entered string Value by the user is: " << userValStr << "\n";

}
// cplusplus.com
// stackoverflow.com