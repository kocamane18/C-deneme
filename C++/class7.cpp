#include<iostream>
using namespace std;

class Employee{
private:	
	string name;
	int age;

public:
	Employee(string isim,int yas){
	    name=isim;
	    age=yas; 
    }
    
   /* string getName(){
    	return name;
	}
	
	int getAge(){
		return age;
	}*/
	
	void showInfos(){
		cout << "Isim:" << name << endl;
		cout << "Yas:" << age << endl;
	}
};

int main() {
	Employee Sofor={"Suleyman",24};
	Sofor.showInfos();
	
	
	
	return 0;
}
