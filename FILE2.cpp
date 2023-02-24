#include <iostream>

using namespace std;

int main()
{
	FILE *PFI,*PFO;
   char Kar;
   PFI=fopen("file1.cpp","r");
   PFO=fopen("HASIL.cpp","w");
   if(PFI==NULL)
   	cout<<"File Tidak Ada/Tidak Dapat Dibuka"<<endl;
   else
   {
   	while((Kar=fgetc(PFI)) != EOF)
   	{
  			fputc(Kar,PFO);
   	}
      cout<<"Menulis file telah selesai"<<endl;
   }
   fclose(PFI);
   fclose(PFO);

}
