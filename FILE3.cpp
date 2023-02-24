// Program Untuk Meng-Enkripsi File Teks
// Dengan cara menggeser karakter
// File Asli = FILE1.cpp
// File Hasil Ekripsi = FILE1A.cpp

#include <iostream>

using namespace std;

int main()
{
	FILE *PFI,*PFO;
   unsigned char Kar,Kar1;
   int Geser;

   cout<<"Kunci Enkripsi (Berupa Angka) = ";
   cin>>Geser;     // Kunci Untuk Menggeser Karakter
   cout<<endl;

   PFI=fopen("FILE1.cpp","r");
   PFO=fopen("ENKRIP.CPP","w");
   if(PFI==NULL)
   	cout<<"File Tidak Ada/Tidak Dapat Dibuka"<<endl;
   else
   {
   	while(!feof(PFI))
   	{
      	Kar=fgetc(PFI);
         if(Kar != '\n')
      		Kar1=Kar+Geser; // Karakter Digeser
         else
            Kar1=Kar;
  			fputc(Kar1,PFO);
   	}
      cout<<"Enkripsi File Telah Selesai"<<endl;
      cout<<"Hasil Enkripsi Ada Di File ENKRIP.CPP"<<endl;
   }
   fclose(PFI);
   fclose(PFO);

}
