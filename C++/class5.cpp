#include<iostream>
using namespace std;

class star{
public:
	string *s;
	int *i;
	
	star(string str, int ivalue){
		s= new string;
		i= new int;
		cout << "\n";
		cout << s << endl;
		cout << i << endl;
		
		*s= str;
		*i= ivalue;
	}
	~star(){  // buraya bu deleteleri eklemezsek i ve s pointerlar� siliniyor ama g�sterdikleri de�erler 
		delete i; // bellekten silinmiyor, yer i�gal ediyorlar. onlar� kullanam�yoruz da.
		delete s;
		cout << "!!!Destructor has been summoned!!!" << endl;
	}
};
int main() {
	star *kgb= new star("Mouse",55);
	delete kgb;
	
	return 0;
}
