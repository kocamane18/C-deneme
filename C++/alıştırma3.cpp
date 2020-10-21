#include<iostream>
using namespace std;

int main() {
	int fibonacci[10];
	fibonacci[0]= fibonacci[1]= 1;
	for(int i=2; i<10; i++){
		fibonacci[i]= fibonacci[i-1]+ fibonacci[i-2];
	}
	
	int j= 0;
	do{
		cout << fibonacci[j] << endl;
		j++;
	}
	while(fibonacci[j]<30);


	
	return 0;
}
