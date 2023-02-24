#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int Bil1;
   int Bil2;
   int Bil3;

   cout<<"Masukkan Bilangan 1 = ";
   cin>>Bil1;
   cout<<"Masukkan Bilangan 2 = ";
   cin>>Bil2;
   cout<<"Masukkan Bilangan 3 = ";
   cin>>Bil3;

   if(Bil1 > Bil2 && Bil1 > Bil3)
   	cout<<"Bilangan Terbesar = "<<Bil1;
   else if(Bil2 > Bil1 && Bil2 > Bil3)
   	cout<<"Bilangan Terbesar = "<<Bil2;
   else
   	cout<<"Bilangan Terbesar = "<<Bil3;
}
