#include <iostream>
using namespace std;

struct adres{
	string sehir;
	int no;
};

struct kisibilgi{
	string ad;
	int yas;
	adres a;
};

int main() {
	kisibilgi satissorumlusu={"Muhammed Benli",36,{"Istanbul",12}};
	cout << satissorumlusu.ad << endl;
	cout << satissorumlusu.yas << endl;
	cout << satissorumlusu.a.sehir << endl;
	cout << satissorumlusu.a.no << endl;
	
	
	
	return 0;
}
