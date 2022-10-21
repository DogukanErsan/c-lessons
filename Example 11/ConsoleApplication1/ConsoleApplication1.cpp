#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
//	 N elemanlı bir dizideki sayıların toplamını bulup yazdırın
	int n;
		int toplam=0;
		cout<< "Dizi eleman sayisini giriniz: ";
		cin>>n;
		int* dizi = new int[n];

		for(int i=0;i<n;i++)
		{
		   cout<<i+1<<". Elemanı giriniz"<<endl;
		   cin>>dizi[i];
		}
		for(int j=0;j<n;j++)
		{
		   toplam=toplam+dizi[j];
		}
		cout<<toplam;
		return 0;
}


		 //	int n=10;
			//int arr[n];
			//int arrsize=(sizeof(arr)/sizeof(arr[0])); // eleman boyutu         

// 2 boyutlu diziler

				/*int arrs[5][6];
				for(int i=0;i<5;i++)
				{
				for(int j=0;j<6;j++)
				{
					arrs[i][j]=i*j;
				}
				}

				for(int i=0;i<5;i++)
				{
				for(int j=0;j<6;j++)
				{
					cout<<"["<<i<<","<<j<<"]"<<arrs[i][j]<<"";
					cout<<"\n";
				}
				}*/
			
	//int arr[2][5] = { {1,2,3,4,5},{3,6,9,11,15} };
// 2 boyutlu dizi tanımlayıp en büyükle en küçüğün arasındaki farkı bulup ekrana yazdır .
	//int enbuyuk = 0;
	//int enkucuk = 0;
	//int fark;
	//enbuyuk = arr[0][0];
	//enkucuk = arr[0][0];
	//for (int i = 0;i < 2;i++)
	//{
	//	for (int j = 0;j < 5;j++)
	//	{
	//		if (arr[i][j] >= enbuyuk)
	//		{
	//			enbuyuk = arr[i][j];
	//		}
	//		else if (arr[i][j] <= enkucuk)
	//		{
	//			enkucuk = arr[i][j];
	//		}
	//	}
	//} fark = enbuyuk - enkucuk;
	//cout << fark;





//	return 0;
//}