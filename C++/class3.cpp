#include<iostream>
using namespace std;

class employee{
private:
	string name;
	int salary;
public:
	employee(string name,int salary){
		this->name= name;   // this pointer'� kullanmasayd�k de�i�ken isimleri ayn� oldu�undan hata al�rd�k.
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
