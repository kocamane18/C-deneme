#include<iostream>
using namespace std;

int main() {
	int dizi[10];
	for(int i=0; i<10; i++){
		cout << "Dizinin " << i+1 << ". elamanini giriniz:";
		cin >> dizi[i];
	}
	
	int a;
	cout << "Bir deger giriniz:";
	cin >> a;
	
	int b= 0;
	for(int i=0; i<10; i++){
		if(dizi[i]==a){
			b++;
		}
		else{
		}
	}
	
	cout << "Dizide girmis oldugunuz degerden " << b << " adet bulunuyor.";
	
	return 0;
}
