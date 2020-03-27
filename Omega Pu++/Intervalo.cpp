#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a >> b >> c;
	if(c >= a && c <= b){
		cout<<"INTERVALO" << endl;
	}else if(b < c && a < c){
		cout<<"DERECHA" << endl;
	}else if(c < b && c < a){
		cout<<"IZQUIERDA" << endl;
	}

	return 0;
}