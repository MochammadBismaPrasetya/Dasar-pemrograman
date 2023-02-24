#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std

int main()
{
	int Bil;
	int *P1;
	P1=new (int);

	Bil=100;
	*P1=200;
	cout<<"Alamat dari Bil     = "<<&Bil<<endl;
	cout<<"Isi dari Bil        = "<<Bil<<endl;
	cout<<endl;
	cout<<"Alamat dari P1      = "<<&P1<<endl;
	cout<<"Isi dari P1         = "<<P1<<endl;
	cout<<"Data Yg Ditunjuk P1 = "<<*P1<<endl;
}
