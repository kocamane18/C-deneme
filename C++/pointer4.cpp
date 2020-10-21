#include <iostream>
using namespace std;

int main() {
	int *ptr= new int;  // pointer'a bellekte yer ayýrdýk.
	*ptr=15;
	
	delete ptr;  // alaný boþalttýk.
	
	int a[]={1,2,3,4};
	int* ptr2;
	ptr2=a;
	cout << ptr2;
	
	
	return 0;
}
