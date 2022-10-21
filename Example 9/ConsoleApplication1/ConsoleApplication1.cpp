#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Test Dosyası";
	ofstream testFile;
	testFile.open("./results.txt", ios::app);
	testFile << "User Data" << endl;
	testFile.close();
}