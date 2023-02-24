#include <iostream>
#include <conio.h>

using namespace std;

void Inisialisasi(int Data[100], int N)
{
	for(int I=1 ; I<=100 ; I++)
	{
		Data[I]=I;
	}
}

int Tebak(int Data[100], int N)
{
	int Ketemu=0;
	char Jawab;
	int Bawah=1, Atas=N,Tengah=(Atas+Bawah)/2;
	while( Bawah<=Atas )
	{
		cout<<endl<<"Apakah Bilangan >= "<<Data[Tengah]<<"? ";
		Jawab=getch();
		if(Jawab=='Y' || Jawab=='y')
		{
			Bawah=Tengah + 1;
			Tengah = (Bawah+Atas)/2;
		}
		else
		{
			Atas=Tengah-1;
			Tengah = (Bawah+Atas)/2;
		}
		Ketemu = Data[Tengah];
	}
	return Ketemu;
}


int main()
{
	int Data[100],N=100;
	int Bil,Ketemu;
	Inisialisasi(Data,N);
	Ketemu=Tebak(Data,N);
	cout<<endl<<"Bilangan Yang Ditebak = "<<Ketemu;
}
