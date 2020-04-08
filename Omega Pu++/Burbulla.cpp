#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,factorial,resultado, resultado2;
	factorial = 0;
	resultado2 = 0;
	int i = 0;
	cin>>n;
	int array[n];
	while(i <= n){
		factorial = (i*(i+1))/2;
		resultado = resultado + factorial;
		i++;
	}
	
	cout<<resultado;

	return 0;
}