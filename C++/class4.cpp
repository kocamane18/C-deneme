#include<iostream>
using namespace std;

class giris{
public:
	giris(){  // obje olu�turunca otomatik �a��r�l�yor. ama "giris" d���nda bir �ey yaz�nca olmuyor.
		cout << "Gunaydin mudur." << endl;
	}
	~giris(){  // obje silinince otomatik �a��r�l�yor.
		cout << "Destructor cagirildi." << endl;
	}	
};

int main() {
    giris* ptr= new giris(); // obje olu�turduk.
    delete ptr;
    
    giris* grs= new giris();
   		
	return 0;
}

//  Alt Gr + � = ~~
