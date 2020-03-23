#include<iostream>

using namespace std;

int main(){

	int dia, mes, anio;
	cout<<"Ingresa el dia";
	cin>>dia;
	cout<<"Ingresa el mes";
	cin>>mes;
	cout<<"Ingresa el anio";
	cin>>anio;
	if(dia == 24 && mes == 12){
		cout<<"La fecha es de navidad";
	}else{
		cout<<"La fecha no fue en navidad"
	}

	return 0;
}