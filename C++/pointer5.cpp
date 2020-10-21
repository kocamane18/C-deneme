#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Saklanacak deger adedi:";
	cin >> size;
	
	int* ptr;
	ptr= new int [size];
	cout << ptr << endl;
	
	for(int i=0; i<size; i++){
		cout << i+1 << ". degeri giriniz:";
		cin >> ptr[i];
	}
	
	for(int j=0; j<size; j++){
		cout << ptr[j] << endl;
	}
	
	delete [] ptr;
	
	
	
	return 0;
}
