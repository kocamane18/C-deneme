#include<iostream>
using namespace std;

int main() {
	double toplam=0;
	double height[10];
	for(int i=0; i<10; i++){
		cout << i+1 << ". ogrencinin boy uzunlugu:";
		cin >> height[i];
		toplam+= height[i];
	}
	
	double ort;
	ort= toplam/10;
	cout << "Sinifin boy ortalamasi= " << ort << endl;
	
	int a= 0;
	for(int i=0; i<10; i++){
		if(height[i]>ort){
			a+= 1;
		}
		else{
		}
	}
	
	cout << "Sinifin boy ortalamasindan uzun olan " << a << " kisi var.";
	
	return 0;
}
