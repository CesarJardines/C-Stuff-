#include <bits/stdc++.h>
using namespace std;

int main(){
	int lista1, lista2, entero1,entero2;
	entero1 = 0;
	entero2 = 0;
	int i = 0;
	while(i <= 15){
		cout<<"Ingresa un numero entero";
		cin>>entero1;
		lista1 = lista1 + entero1;
		i++;
	}	

	cout<<"Segunda listas";
	i = 0;
	while(i <= 15){
		cout<<"Ingresa un numero entero";
		cin>>entero2;
		lista2 = lista2 + entero2;
		i++;
	}

	//cout<<lista1<<endl;
	//cout<<lista2;

	if(lista1 > lista2){
		cout<<"Lista 1 mayor";
	}else{
		if(lista2 > lista1){
			cout<<"Lista 2 mayor";
		}else{
			cout<<"Listas iguales";
		}
	}
	return 0;
}