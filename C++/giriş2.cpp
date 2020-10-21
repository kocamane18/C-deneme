#include <iostream>
using namespace std;

int main() {
	int a=5,b=2;
	cout << "a+b= " << 5+2 << endl;
	cout << "a*b= " << a*b << endl;
	cout << "a/b= " << a/float(b) << endl;
	
//	<< out vermeye, >> input almaya yarar.

    int c,d,e;
    cout << "\nSayilari giriniz: ";
    cin >> c >> d >> e;
    cout << "Toplam= " << c+d+e << "\n\n";
    
    string konu1="Bu bir soygundur!";
    string konu2 = "Eller havaya!";
    string konu3= konu1 + konu2;
    cout << konu1 << endl << konu2 << endl;
    cout << "Tekrar ediyorum. " << konu3;
	
	
	
	
	return 0;
}
