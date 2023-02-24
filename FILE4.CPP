// Program Untuk Mengembalikan File Hasil Enkripsi
// Dengan cara menggeser karakter
// File Enkripsi = FILE1A.cpp
// File Hasil Desripsi = FILE1B.cpp

#include <iostream>

using namespace std;

int main()
{
	FILE *PFI,*PFO;
   unsigned char Kar,Kar1;
   int Geser;

   cout<<"Kunci Enkripsi (Berupa Angka) = ";
   cin>>Geser;     // Kunci Untuk Menggeser Karakter ke Aslinya
   cout<<endl;

   PFI=fopen("ENKRIP.cpp","r");
   PFO=fopen("DEKRIP.CPP","w");
   if(PFI==NULL)
   	cout<<"File Tidak Ada/Tidak Dapat Dibuka"<<endl;
   else
   {
   	while(!feof(PFI))
   	{
      	Kar=fgetc(PFI);
         if(Kar != '\n')
      		Kar1=Kar-Geser; // Karakter Digeser ke Aslinya
         else
            Kar1=Kar;
  			fputc(Kar1,PFO);
   	}
      cout<<"Deskripsi File Telah Selesai"<<endl;
      cout<<"Hasil Ada Di File : DEKRIP.CPP"<<endl;
   }
   fclose(PFI);
   fclose(PFO);

}
