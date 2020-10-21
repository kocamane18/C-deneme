#include <iostream>
using namespace std;

int main() {
	//  break komutu döngüyü sonlandýrýr.
	//  continue komutu, komuttan sonraki iþlemleri yapmadan döngüyü bir sonraki adýma geçirir.
	int i=0;
	while(i<10){
		if(i==6){
			break;
		}	
		cout << i << endl;
		i++;
	}
	cout << "\n\n";
	
	for(i=0; i<8; i++){
		if(i==3 || i==5){
			continue;
			cout << i << endl;
		}	
		
	}
	cout << "\n\n";
	
	int j=0;
	while(j<12){
		if(j==4 || j==9){
			j++;
			continue;
		}
		cout << j << endl;
		j++;
	}
	
	
	
	
	
	return 0;
}
