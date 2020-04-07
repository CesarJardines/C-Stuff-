#include <bits/stdc++.h>
using namespace std;

int main(){
	int mayor, igual,valor, n;
	igual = 0;
	mayor = 0;
	cout<<"Ingresa un numero: "<<endl;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>valor;
		if(valor > 1000 ){
			mayor++;
		}else{
			if (valor == 1000)
			{
				/* code */
				igual++;
			}
		}
	}

	cout<<"Valores mayores a 1000: "<<mayor<<endl;
	cout<<"Valores iguales a 1000: "<<igual<<endl;



	return 0; 
}