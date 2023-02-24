#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int N,Max,Bil,I;
 
   cout<<"Banyaknya Bilangan = ";
   cin>>N;
   for(I=1 ; I<=N;I++)
   {
   		cout<<"Masukkan Bilangan "<<I<<" = ";
   		cin>>Bil;
   		if(I==1)
   			Max=Bil;
   		else if(Max < Bil)
		   	Max=Bil;	
   }
  	cout<<"Bilangan Terbesar = "<<Max;
}
