#include <iostream>
using namespace std;
//if else do while 
//0-100 arası sayı
//10 adet veri girişi olacak
//tek yada çift olanları ayrı ayrı toplacayak
 
int main()
{
	int sayi;
	int tekler = 0, ciftler = 0;
	int tektoplam = 0, cifttoplam = 0;
		for (int i = 1;i <= 10;i++)
		{
			cout << i << ".Sayi : ";
			cin >> sayi;

			if (sayi % 2 == 1)
			{
				tekler++;
				tektoplam += sayi;
			}
			else
			{
				ciftler++;
				cifttoplam += sayi;
			}
		}

	cout << endl;
	cout << "Girilen Tek Sayı Adeti : " << tekler << endl;
	cout << "Girilen Tek Sayıların Toplamı : " << tektoplam << endl;
	cout << "Girilen Çift Sayı Adeti : " << ciftler << endl;
	cout << "Girilen Çift Sayıların Toplamı : " << cifttoplam << endl;
}
