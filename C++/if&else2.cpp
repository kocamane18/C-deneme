#include <iostream>
using namespace std;

int main() {
	cout << "***Hesap Makinesi***" << endl;
	cout << "  ----------------   " << endl;
	cout << "1-Toplama islemi" << endl;
	cout << "2-Cikarma islemi" << endl;
	cout << "3-Carpma islemi\n" << endl;
	
	int input;
	cout << "Islem seciniz: "; cin >> input;
	cout << "\n";
	
	if(input==1){
		int a,b;
	    cout << "Sayilari bosluk birakarak giriniz: "; cin >> a >> b;
		cout << "Toplam=" << a+b;
	}
	if(input==2){
		int a,b;
	    cout << "Sayilari bosluk birakarak giriniz: "; cin >> a >> b;
		cout << "Sonuc=" << a-b;
	}
	if(input==3){
		int a,b;
	    cout << "Sayilari bosluk birakarak giriniz: "; cin >> a >> b;
		cout << "Carpim=" << a*b;
	}
	else{
		cout << "Dusunuyorum, oyleyse varim.";
	}			
			
	return 0;
}
