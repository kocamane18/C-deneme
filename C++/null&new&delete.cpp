#include <iostream>
using namespace std;

int main() {
	int* ptr= nullptr;  // pointer herhangi bir yeri göstermiyor.
	ptr= new int;  // bellekte bir birimlik yer ayırdık şimdi.
	*ptr= 15; // ayırdığımız yere 15 değerini atadık.
	delete ptr;  /* 15 değerini silip belleği bilgisayarın kullanımına geri verdik. şu an ptr geçerli olmayan
	bir alana işaret ediyor. ptr ---> dangling referans */	
	
	
	return 0;
}
