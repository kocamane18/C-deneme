#include<iostream>
using namespace std;
/* normalde fonksiyon içinde oluþan deðerler fonksiyonun sona ermesiyle bellekten silinirler.
"static" kullandýðýmýzda ise silinmezler.*/

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
