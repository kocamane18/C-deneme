#include <iostream>
using namespace std;

int main() {
	int* ptr= nullptr;  // pointer herhangi bir yeri g�stermiyor.
	ptr= new int;  // bellekte bir birimlik yer ay�rd�k �imdi.
	*ptr= 15; // ay�rd���m�z yere 15 de�erini atad�k.
	delete ptr;  /* 15 de�erini silip belle�i bilgisayar�n kullan�m�na geri verdik. �u an ptr ge�erli olmayan
	bir alana i�aret ediyor. ptr ---> dangling referans */	
	
	
	return 0;
}
