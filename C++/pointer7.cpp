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

void deneme(ogrenci* ptr){  // pointer kullanmadan yap�nca as�l structure ayn� kal�yor. de�i�tirdi�imiz de�er
	ptr->soyad= "kocaman";  // kopya de�er oluyor.
	ptr->yazdir();
}

int main() {
	ogrenci mehmet={"ersoy",10,509};
	deneme(&mehmet);
	
	mehmet.yazdir();
		
	return 0;
}
