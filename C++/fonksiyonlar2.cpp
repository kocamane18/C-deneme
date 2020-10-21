#include <iostream>
using namespace std;

void chancevalue(int *ptr){
	*ptr=25;
	cout << "Fonksiyon icindeki deger:" << *ptr << endl;
}

/*
void degerdegistir(int sayi){
	sayi=25;
	cout << "Fonksiyon icindeki deger:" << sayi << endl;
}

int main() {
	int a=10;
	cout << "a'nin degeri:" << a << endl;
	degerdegistir(a);
	cout << "a'nin yeni degeri:" << a << endl;    */
	
	int main() {
		int b=12;
		cout << "b'nin degeri:" << b << endl;
		chancevalue(&b);
		cout << "b'nin yeni degeri:" << b << endl;
		
		cout << &b << endl;
	
	
	
	return 0;
}
