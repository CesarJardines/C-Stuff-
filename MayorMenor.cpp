#include <bits/stdc++.h>
using namespace std;

int main(){
	int mayores, menores, iguales, calificacion;
	mayores = 0;
	menores = 0;
	iguales = 0;

	for(int i = 0; i < 10 ; i++){
		cout<<"Ingresa una calificación";
		cin>>calificacion;
		if(calificacion > 7){
			mayores++;
		}else{
			if(calificacion < 7){
				menores++;
			}else{
				iguales++;
			}
		}
	}

	cout<<"Calificaciónes mayores a 7: " << mayores<<endl;
	cout<<"Calificaciónes iguales a 7: " <<iguales<<endl;
	cout<<"Calificaciónes menores a 7: " <<menores<<endl;



	return 0;
}