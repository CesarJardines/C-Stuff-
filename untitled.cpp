#include <bits/stdc++.h>
using namespace std;

int main(){
	int tres, cinco,valor;
	tres = 0;
	cinco = 0;
	for (int i = 0; i < 10; ++i){
		cin>>valor;
		if(valor%5== 0 && valor%3 == 0){
			tres++;
			cinco++;
		}else{
			if(valor%3 == 0){
			tres++;
			}if(valor%5 ==0){
			cinco++;
		}

		}
	}

	cout<<"Valores multiplos de 3: "<<tres<<endl;
	cout<<"Valores multiplos de 5: "<<cinco<<endl;



	return 0; 
}