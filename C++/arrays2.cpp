#include <iostream>
using namespace std;

int main() {
	int array[]={1,2,3,4};
	
	cout << array << endl;   // array ba�lang�� adresini g�steriyor. array pointer de�il !
	cout << array+1 << endl;   // int de�erler 4 byte l�k yer tuttu�u i�in bir sonraki kutucu�a giderken 4 art�r�yor.
	cout << array+2 << endl << endl;
	
	int *ptr=array;
	cout << ptr << endl;
	ptr=ptr+1;
	cout << "Pointerin yeni degeri:" << ptr << endl;
	
	int *str=array[2];   // arrayin 2. indexinin ba�lang�� adresini kopyalad�.
	
	return 0;
}
