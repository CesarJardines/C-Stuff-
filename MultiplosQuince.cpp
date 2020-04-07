#include <bits/stdc++.h>
using namespace std;

int main(){
	int pares, negativos, positivos, multiplos,n,acomulado;
	acomulado = 0;
	pares = 0;
	negativos = 0;
	positivos = 0;
	multiplos = 0;
	for (int i = 0; i < 10; ++i){
		cin>>n;
		if (n%15 == 0)
		{
			acomulado =acomulado +n;
			multiplos++;
		}if (n >= 0)
		{
			positivos++;
		}else{
			if (n < 0)
			{
				negativos++;
			}
		}
	}

	cout<<"Valores negativos: " <<negativos<<endl;
	cout<<"Valores positivos: " <<positivos<<endl;
	cout<<"Valores multiplo: " <<multiplos<<endl;
	return 0;
}
