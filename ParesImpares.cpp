#include <bits/stdc++.h>
using namespace std;

int main(){
	int par, impar,n,num;
	par = 0;
	impar = 0;
	int i = 0;
	cout<<"Ingresa un numero n";
	cin>>n;
	while(i < n){
		cout<<"Ingresa un numero";
		cin>>num;
		if(num%2 == 0){
			par++;
		}else{
			impar++;
		}
		i++;
	}	
	cout<<"Numeros pares: "<< par<<endl;
	cout<<"Numeros impares: "<< impar<<endl;

	return 0;
}