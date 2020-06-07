#include<iostream>

using namespace std;

int main(){

	int var1, var2;
	cout<<"Ingresa el var1";
	cin>>var1;
	cout<<"Ingresa el var2";
	cin>>var2;
	if(var1 > 0 && var2 > 0){
		cout<<"La coordenada esta en el primer cuadrante";
	}if( var1 < 0 && var2 < 0){
		cout<<"La coordenada está en el cuarto cuadrante"
	}if(var1 < 0 && var2 > 0 ){
		cout<<"La coordenada esta en el segundo cuadrante"
	}else{
		cout<<"La coordenada esta en el tercer cuadrante";
	}

	return 0;
}