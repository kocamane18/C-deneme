#include <iostream>
using namespace std;

class student{   // bir class olu�turduk �imdi student'ten istedi�imiz kadar de�i�ken olu�turabiliriz.
// public ---> her taraftan eri�ilebilir
	public:
		string name;
		int no;
		
		void tellno(){
			cout << "Numaram:" << no << endl;
		}
};

int main() {
	student student1;
	student student2;
	
	student1.name= "Mustafa";
	student2.name= "Ekmel";
	
	student1.no= 127;
	student2.no= 340;
	
	cout << "Benim adim " << student1.name << endl;
	
	student1.tellno();
	
	
	
	return 0;
}
