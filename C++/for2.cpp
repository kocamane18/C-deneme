#include <iostream>
using namespace std;

void aradegeryazdir(const int *ptr1,const int *ptr2){
	for(; ptr1!=ptr2+1; ptr1++){
		cout << *ptr1 << "  ";
	}
}

int main() {
	const int a=25;  // (constant) ile bir tanýmlama yaptýðýmýzda atadýðýmýz deðer deðiþtirilemez oluyor.
	
	int b[]={10,20,30,40,50,60,70,80,90};
	aradegeryazdir(b+2,b+5);  // b ---> 10 deðerinin baþlangýç noktasýnýn adresini veriyor. 
	                          //     pointer atamasý yapmamýza gerek kalmadý.
	
	
	return 0;
}
