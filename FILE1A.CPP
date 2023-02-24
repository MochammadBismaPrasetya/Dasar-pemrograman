#include <iostream>

using namespace std;

int main()
{
	FILE *PFI;
   char Kar;
   /*
   PFI=fopen("COBA.TXT","r");
   if(PFI==NULL)
   	cout<<"File Tidak Ada/Tidak Dapat Dibuka"<<endl;
   */
   // ATAU

   if( (PFI=fopen("COBA.TXT","r"))==NULL)
		cout<<"File Tidak Ada/Tidak Dapat Dibuka"<<endl;
   else
   {
   	while((Kar=fgetc(PFI)) != EOF)
   	{
   		cout<<Kar;
   	}
   }
   fclose(PFI);
}
ÿ