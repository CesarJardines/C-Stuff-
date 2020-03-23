#include<iostream>

using namespace std;

int main(){

	int var1, var2, var3;
	cout<<"Ingresa el primer valor";
	cin>>var1;
	cout<<"Ingresa el segundo valor";
	cin>> var2;
	cout<<"Ingresa el tercer valor";
	cin>> var3;
	if (var1 > var2 && var1 > var3){
		cout<<var1;
	} if (var2 > var1 && var2 > var3){
		cout<<var2;
	} else {
		cout<<var3;
	}



	return 0;
}