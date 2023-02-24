#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespce std;

int main()
{
	int N;
	int *P1,*P2;
	P1=new (int);
   P2=new (int);
	P2=P1;

	cout<<"Jumlah Data = ";
	cin>>N;
	for(int I=1 ; I<=N ; I++)
	{
		cout<<"Data Ke "<<I<<" = ";
		cin>>*P1;
		P1++;
	}
	cout<<"Data Yang Disimpan "<<endl;
	P1=P2;
	for(int I=1 ; I<=N ; I++)
	{
		cout<<*P1<<endl;
		P1++;
	}   
}
