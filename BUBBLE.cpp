#include <iostream>

using namespace std;

void Urut_Data(int Bil[50], int N)
{
	for(int I=1  ; I<=N-1 ; I++)
	{
		for(int J=1 ; J<= N-I; J++)
		{
			if(Bil[J] > Bil[J+1]) //Membandingkan
			{
				// Proses Menukar
				int Tmp;
				Tmp=Bil[J];
				Bil[J]=Bil[J+1];
				Bil[J+1] = Tmp;	
			}  
		}
	}
}

void Input_Data(int Bil[50], int N)
{
	for(int I=1 ; I<=N ; I++)
	{
		cout<<"Bilangan Ke "<<I<<" = ";
		cin>>Bil[I];
	}
}

void Tampil(int Bil[50], int N)
{
	cout<<endl<<"Data Setelah Diurutkan"<<endl;
	for(int I=1 ; I<=N ; I++)
	{
		cout<<Bil[I]<<"   ";
	}
}

int main()
{
	int Bil[50], N;
	cout<<"Banyaknya Data = ";
	cin>>N;
	Input_Data(Bil,N);
	Urut_Data(Bil,N);
	Tampil(Bil,N);
}
