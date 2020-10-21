#include <iostream>
using namespace std;

int main(){
	int array[3];
	array[0]=10;
	array[1]=20;
	array[2]=30;
	cout << array[0] << "  " << array[1] << "  " << array[2] << endl;
	
	double array2[]={1.2,3.4,5.6,7.8};
	cout << array2[0] << "  " << array2[1] << endl << endl;
	
	string array3[4];
	int i;
	for(i=0;i<4;i++){
		cout << i+1 << ". index'i giriniz:"; cin >> array3[i];
	}
	for(i=0;i<4;i++){
		cout << array3[i] << endl;
	}
	
	return 0;
}
