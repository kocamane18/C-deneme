#include<iostream>
using namespace std;
/* normalde fonksiyon i�inde olu�an de�erler fonksiyonun sona ermesiyle bellekten silinirler.
"static" kulland���m�zda ise silinmezler.*/

void ssd(){
	static int i= 3;  
	i++;
	cout << i << endl;
}
int main() {
	ssd();
	ssd();
	ssd();
	
	return 0;
}
