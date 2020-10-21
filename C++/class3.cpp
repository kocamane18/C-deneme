#include<iostream>
using namespace std;

class employee{
private:
	string name;
	int salary;
public:
	employee(string name,int salary){
		this->name= name;   // this pointer'ý kullanmasaydýk deðiþken isimleri ayný olduðundan hata alýrdýk.
		this->salary= salary;
	}
	
	string putName(){
		return name;
	}
	
	int putSalary(){
		return salary;
	}
	
	void putInfos(){
		cout << name << endl;
		cout << salary << endl;
	}
};

int main() {
	employee employee("Yasin",15000);
	employee.putInfos();

		
	return 0;
}
