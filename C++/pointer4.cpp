#include <iostream>
using namespace std;

int main() {
	int *ptr= new int;  // pointer'a bellekte yer ay�rd�k.
	*ptr=15;
	
	delete ptr;  // alan� bo�altt�k.
	
	int a[]={1,2,3,4};
	int* ptr2;
	ptr2=a;
	cout << ptr2;
	
	
	return 0;
}
