#include<iostream>

using namespace std;

int main(){

	int var1, var2, var3;
	cout<<"Ingresa el var1";
	cin>>var1;
	cout<<"Ingresa el var2";
	cin>>var2;
	cout<<"Ingresa el var3";
	cin>>var3;
	if(var1 < 10 && var2 < 10 && var3 < 10){
		cout<<"El numero es menor a 10";
	}else{
		cout<<"El numero es mayor a 10";
	}

	return 0;
}