#include <bits/stdc++.h>
using namespace std;

int main(){
	int base, altura,superficie, n,contador;
	contador = 0;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>base>>altura;
		superficie = base * altura;

		cout<<"Base: "<<base<<" Altura: "<<altura<<" superficie: "<<superficie<<endl;
		if(superficie > 12){
			contador++;
		}
	}

	cout<<"Triangulos con superficie mayor a 12: "<<contador<<endl;



	return 0; 
}