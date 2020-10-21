#include<iostream>
using namespace std;

class ogrenci{
public:	
	string soyad;
	int sinif;
	int no;

    void yazdir(){
	    cout << soyad << endl;	
	    cout << sinif << endl;	
	    cout << no << endl;
    }
};

void deneme(ogrenci* ptr){  // pointer kullanmadan yapýnca asýl structure ayný kalýyor. deðiþtirdiðimiz deðer
	ptr->soyad= "kocaman";  // kopya deðer oluyor.
	ptr->yazdir();
}

int main() {
	ogrenci mehmet={"ersoy",10,509};
	deneme(&mehmet);
	
	mehmet.yazdir();
		
	return 0;
}
