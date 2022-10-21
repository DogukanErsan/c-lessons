#include <iostream>
#include <string>
#include <clocale>
#include <fstream>
#include <math.h>
using namespace std;

void SenetAl() {
	ifstream dosyaOku("senet_al.txt");
	char karakter;

	if (dosyaOku.is_open()) {

		while (dosyaOku.get(karakter)) {
			cout << karakter;
		}
		cout << endl;
		cout << "Lütfen Yapmak İstediğiniz İşlemin Numarasını Giriniz : ";
		dosyaOku.close();
	}
}
void SenetSat() {
	ifstream dosyaOku("senet_sat.txt");
	char karakter;

	if (dosyaOku.is_open()) {

		while (dosyaOku.get(karakter)) {
			cout << karakter;
		}
		cout << endl;
		cout << "Lütfen Yapmak İstediğiniz İşlemin Numarasını Giriniz : ";
		dosyaOku.close();
	}
}
int main()
{
	setlocale(LC_ALL, "Turkish");
    cout << "--------------------------------------------------\n";
    cout << "Doğuş Hisse Alım - Satım Uygulamasına Hoşgeldiniz!\n";
    cout << "--------------------------------------------------\n";
	cout << "Mevcut Hizmetlerimiz Aşağıda Yazılmıştır!\n";
	cout << "\n";
	cout << "1) Senet Al\n";
	cout << "2) Senet Sat\n";
	cout << "3) Kar - Zarar Durumu\n";
	cout << "4) Temizle - Sıfırla\n";
	cout << "\n";
	cout << "Lütfen Yapmak İstediğiniz İşlemin Numarasını Giriniz : ";
	int islem;
	cin >> islem;
	if (islem == 1)
	{
		SenetAl();
	}
	else if (islem == 2)
	{
		SenetSat();
	}
	string clear;
	cin >> clear;
	if (clear == "4" or clear == "Temizle")
	{
		system("cls");
	}
}
