#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	/*
	cout << "Test Dosyasi" << endl;
	ofstream testFile;
	testFile.open("./results.txt", ios::app);
	testFile << "User Data 7" << endl;
	testFile.close();
	*/
	ifstream fileİn;

	fileİn.open("./results.txt");
	string line;
	while (fileİn) 
	{
		getline(fileİn, line);
		cout << "Dosya Verisi : " << line << endl;
	}


}