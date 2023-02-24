#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int *P1,*P2;

void Simpan(int N)
{
	P2=P1;
	for(int I=1 ; I<=N ; I++)
	{
		cout<<"Data Ke "<<I<<" = ";
		cin>>*P1;
		P1++;
	}

}

void Tampil(int N)
{
	P1=P2;
	for(int I=1 ; I<=N ; I++)
	{
		cout<<*P1<<endl;
		P1++;
	}

}

int main()
{
	int N;
	
	P1=new (int);
    P2=new (int);

	cout<<"Jumlah Data = ";
	cin>>N;
	Simpan(N);
	cout<<"Data Yang Disimpan "<<endl;
	Tampil(N);
}
