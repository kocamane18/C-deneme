#include <iostream>
using namespace std;
                   // *ptr de yazabilirdik array[] yerine
void printarray(int array[],int lenght){
	for(int i=0; i<lenght; i++){
		cout << array[i] << endl;
	}      // o zaman array[i] yerine de ptr yazacaktýk
}

int main() {
/*	int a=10;
	int &rfr=a;
	cout << a << endl;
	
	rfr=20;
	cout << a <<  endl; */
	
	int a[]={1,2,3,4,5};
	printarray(a,5);
	
	
	return 0;
}
