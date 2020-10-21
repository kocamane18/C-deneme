#include<iostream>
using namespace std;

class giris{
public:
	giris(){  // obje oluþturunca otomatik çaðýrýlýyor. ama "giris" dýþýnda bir þey yazýnca olmuyor.
		cout << "Gunaydin mudur." << endl;
	}
	~giris(){  // obje silinince otomatik çaðýrýlýyor.
		cout << "Destructor cagirildi." << endl;
	}	
};

int main() {
    giris* ptr= new giris(); // obje oluþturduk.
    delete ptr;
    
    giris* grs= new giris();
   		
	return 0;
}

//  Alt Gr + ü = ~~
