#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,s,n,i,aux1,aux2;
	float p,a;
	cin>>t;

	while(t--){
		cin>>s>>n;
		float array[n];
		a = array[0];
		for(i = 0; i < n ; i++){
			cin>>p;
			array[i] = p;
			if(array[i+1] < a){
				a = array[i];
			}else{
				a = array[0];
			}
		}
		cout<<"Case 1: comprar en el dia" <<a;
	}

	return 0;
}