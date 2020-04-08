#include<bits/stdc++.h>
using namespace std;

int main(){
	int lap = 4;
	int i,aux,incremento;
	long long n;
	i = 1;
	aux = 1;
	incremento = 0;
	cin>>n;
	while(i<n){
		incremento = incremento + lap;
		aux = aux + incremento;
		i++;
	}

	cout<<aux<<endl;

	return 0;
}