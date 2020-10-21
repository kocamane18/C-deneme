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
	int getValue() const { // Bu metod herhangi bir deðeri deðiþtiremez. Const olmayan metodlarý çaðýramaz.
		return this->a;
	}
};

int main() {
    giris giris1(15);
    cout << giris1.getValue() << endl;
	
	return 0;
}
