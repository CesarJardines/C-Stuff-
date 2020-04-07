#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int suma;
	cin>>n;
	for (int i = 1; i <= 12; ++i){
		suma = n*i;

		cout<<suma<<endl;
	}

	cout<<"La suma de los 5 numeros es: " <<suma<<endl;

	return 0;
}