#include <iostream>
using namespace std;

int main() {
	string sys_kullaniciadi="UveysulVahset";
	string sys_sifre="NaberMudur";
	
	string kullaniciadi;
	string sifre;
	
	while(true){   // d�ng�y� sonsuza kadar d�nmeye ayarlad�k.
		cout << "Kullanici adi:"; cin >> kullaniciadi;
		cout << "Sifre:"; cin >> sifre;
		if(kullaniciadi==sys_kullaniciadi && sifre==sys_sifre){
			cout << "Hosgeldin Mudur.";
			break;
		} 
		else{
			cout << "Kullanici adi veya sifre haysiyetsiz." << endl;
		}
		cout << "\n";
	}
	
	
	
	
	return 0;
}
