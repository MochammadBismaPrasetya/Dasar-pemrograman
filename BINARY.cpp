#include <iostream>

using namespace std;

int Cari_Data(int Data[50], int N, int Bil)
{
	int Ketemu=0;
	int Bawah=1, Atas=N,Tengah=(Atas+Bawah)/2;
	while( (!Ketemu) && (Bawah<=Atas) )
	{
		if(Bil==Data[Tengah])
		{
			Ketemu=1;
		}
		else
		{
			if(Bil >= Data[Tengah])
			{
				Bawah=Tengah + 1;
				Tengah = (Bawah+Atas)/2;
			}
			else
			{
				Atas=Tengah-1;
				Tengah = (Bawah+Atas)/2;
			}
		}
	}
	return Ketemu;
}


int main()
{
	int Data[50]={10,20,30,40,50,60,70,80,90,100}, N=10;
	int Bil,Ketemu;
	cout<<"Bilangan Yang Dicari = ";
	cin>>Bil;
	Ketemu=Cari_Data(Data,N,Bil);
	if(Ketemu)
		cout<<"Bilangan Ditemukan";
	else
		cout<<"Bilangan Tidak ditemukan";	
}
