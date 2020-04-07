#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	double d, estatura;
	cout<< "Ingresa un numero entero positivo";
	cin>>n;
	i = 0;
	while(i < n){
		cout<< "Ingresa una estatura";
		cin>>d;
		estatura = estatura + d;
		i++;

	}	
	int promedio = estatura / n;

	cout<<"El promedio es de: "<< promedio;

}