#include<iostream>
using namespace std;
class giris{
private:
	int a;
public:
	giris(int a)  {
		this->a= a;
	}
	void deneme(){
	    cout << "Hello World" << endl;
	}
	int getValue() const { // Bu metod herhangi bir de�eri de�i�tiremez. Const olmayan metodlar� �a��ramaz.
		return this->a;
	}
};

int main() {
    giris giris1(15);
    cout << giris1.getValue() << endl;
	
	return 0;
}
