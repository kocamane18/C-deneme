#include<iostream>
using namespace std;

int main() {
	cout << " 1-Otomobil\n 2-Minibus\n 3-Kamyon\n 4-Otobus\n";
	int aractur;
	cout << "\aArac turunun numarasini giriniz:";
	cin >> aractur;
	
	int time;
	cout << "\aOtoparkta gecirilen saat:";
	cin >> time;
	
	int ucret;
	switch(aractur){
		case(1):
			ucret= time;
			cout << "Borcunuz:" << ucret;
			break;
		case(2):
			ucret= 2*time;
			cout << "Borcunuz:" << ucret;
			break;
		case(3):
			ucret= 4*time;
			cout << "Borcunuz:" << ucret;
			break;
		case(4):
			ucret= 4*time;
			cout << "Borcunuz:" << ucret;
			break;
		default:
		cout << "Gecersiz arac turu.";	
	}
	
	
	return 0;
}
