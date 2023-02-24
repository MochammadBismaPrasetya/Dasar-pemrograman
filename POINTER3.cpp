#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	int *P1;
	P1=new (int);

	*P1=10;
	cout<<P1<<endl;
	cout<<*P1<<endl;
	P1++;
   *P1=20;
	(*P1)++;
	cout<<P1<<endl;
	cout<<*P1<<endl;  
}
