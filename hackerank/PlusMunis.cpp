#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){	
	int n,k;
	double cero, negativos, positivos;
	cin>>n;
	for(int i = 0; i < n ;i++){
		cin>>k;
		if(k == 0){
			cero++;
		}else{
			if(k<0){
				negativos++;
			}else{
				positivos++;
			}
		}
	}

	//cout<<cero<<endl<<positivos<<endl<<negativos<<endl;
	double positivos1 = positivos/n;
	double negativos1 = negativos/n;
	double cero1 = cero/n;
	cout<<positivos1<<endl<<negativos1<<endl<<cero1<<endl;
	return 0;
}