#include<iostream>
using namespace std;

class Employee{
private:  // class �n d���nda eri�ime izin vermiyor.
	string name;
	
public:
	void setName(string isim){
		name= isim;
	}
	
	string getName(){
		return name;
	}
};

int main() {
	Employee employee1;
	employee1.setName("Abdulaziz");
	
	cout << employee1.getName();
	
	
	return 0;
}
