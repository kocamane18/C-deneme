#include <iostream>
using namespace std;

void selamla(){
	cout << "Esselamu aleykum ey cemaati muslimin.\n\n";
}

void factorial(int sayi){
	int faktoriyel=1;
	for(int i=2; i<=sayi; i++){
		faktoriyel*=i;
	}
	cout << "Sayinin faktoriyeli=" << faktoriyel;
}

int usalma(int taban,int us){
	int baslangic=1;
	for(int i=1; i<=us; i++){
		baslangic*=taban;
	}
	return baslangic;
}

int main() {
	selamla();
	
	int a;
	cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz:"; cin >> a;
	factorial(a);
	cout << "\n\n";
	
	cout << usalma(3,4);;
	
	
	
	
	
	return 0;
}
