#include<iostream>
using namespace std;

int main() {
	int toplam;
	for(int i=21; i<=81; i++){
		for(int j=2; j<i; j++){
			if(i==j+1){
				if(i%j!=0){
					cout << i << endl;
					toplam+=i;
				}
			}
			else{
				if(i%j!=0){
				    continue;
		    	}
		    	else{
			    	break;
		    	}
	    	}
	    }
	}
	cout << "\n\n";
	cout << "Toplam:" << toplam;
	
/*	int i, j, sayac=0, toplam=0;

     for ( i=21; i<81; i++ )
     {
           for ( j=1; j<=i; j++ )
           {
                 if ( i % j == 0 )
                 {
                       sayac = sayac+1;
                  }
            }
            if ( sayac ==2)
            {
                 cout<<i<<endl;
                 toplam+=i;
             }
             sayac=0;
      }
      cout<<"toplam: " <<toplam<<endl;*/
	
	return 0;
}
