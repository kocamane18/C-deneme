#include <iostream>
using namespace std;

struct student{
	int id;
	char letter;
};

int main() {  // bellekte ne kadar byte yer tuttu�unu g�steriyor.
	cout << sizeof(int) << endl;
	int a=10;
	cout << sizeof(a) << endl << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	
	cout << sizeof(student);
	
	
	return 0;
}
