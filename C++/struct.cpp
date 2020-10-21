#include <iostream>
using namespace std;

struct employee{
	int id;
	string name;
	string depatment;
};

int main() {
	employee mudur={523,"Rigby","Public Relations"};
	cout << mudur.depatment <<endl;
	
	employee* ptr=&mudur;
	cout << ptr->name << endl;
	
	cout << ptr;
	
	
	
	return 0;
}
