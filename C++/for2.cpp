#include <iostream>
using namespace std;

void aradegeryazdir(const int *ptr1,const int *ptr2){
	for(; ptr1!=ptr2+1; ptr1++){
		cout << *ptr1 << "  ";
	}
}

int main() {
	const int a=25;  // (constant) ile bir tan�mlama yapt���m�zda atad���m�z de�er de�i�tirilemez oluyor.
	
	int b[]={10,20,30,40,50,60,70,80,90};
	aradegeryazdir(b+2,b+5);  // b ---> 10 de�erinin ba�lang�� noktas�n�n adresini veriyor. 
	                          //     pointer atamas� yapmam�za gerek kalmad�.
	
	
	return 0;
}
