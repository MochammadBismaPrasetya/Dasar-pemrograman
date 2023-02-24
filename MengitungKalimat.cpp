#include<iostream>

using namespace  std;

void kalimat(char bisma){
	char kata[100];
	int i, spasi=0;
	cin.getline(kata, sizeof(kata));
	for(i=0;kata[i];i++){
	 if(isspace(kata[i]) || ispunct(kata[i])){
	 	spasi++;
	 }
	}
	cout<<"Jumlah kata : "<<spasi +1;
	cout<<endl;
}

int main(){
	int bisma;
	
	cout<<"<==================================>"<<endl;
	cout<<"<==== MOCHAMMAD BISMA PRASETYA ====>"<<endl;
	cout<<"<==================================>"<<endl;
	cout<<"Masukkan kalimatnya : ";
	kalimat(bisma);
	cout<<"<=== TERIMA KASIH TELAH MENCOBA ===>"<<endl;
}
