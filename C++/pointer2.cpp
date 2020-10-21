#include <iostream>
using namespace std;

int main() {
	string array[3]={"Samil","Veysel","Akif"};
	string *ptr=array;
	cout << ptr << endl;
	cout << ptr+1 << endl << endl;
	
	cout << *ptr << endl;
	cout << *(ptr+1) << endl;
	cout << ptr[1];
	
	
	return 0;
}
