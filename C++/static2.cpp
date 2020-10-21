#include<iostream>
using namespace std;

class gamer{
public:
	static int gamers;
	gamer(){
		gamers++;
		cout << "Yeni oyuncu olusturuldu." << endl;
	}
};
int gamer::gamers= 0;

int main() {
	gamer gamer1;
	gamer gamer2;
	gamer gamer3;
	cout << gamer::gamers;
	
	return 0;
}
