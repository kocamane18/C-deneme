#include <iostream>
using namespace std;

int main() {
	int array[]={1,2,3,4};
	
	cout << array << endl;   // array başlangıç adresini gösteriyor. array pointer değil !
	cout << array+1 << endl;   // int değerler 4 byte lık yer tuttuğu için bir sonraki kutucuğa giderken 4 artırıyor.
	cout << array+2 << endl << endl;
	
	int *ptr=array;
	cout << ptr << endl;
	ptr=ptr+1;
	cout << "Pointerin yeni degeri:" << ptr << endl;
	
	int *str=array[2];   // arrayin 2. indexinin başlangıç adresini kopyaladı.
	
	return 0;
}
