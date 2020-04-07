#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, lado1, lado2, lado3, equilatero, isosceles, escaleno;
	equilatero = 0;
	escaleno = 0;
	isosceles = 0;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>lado1>>lado2>>lado3;
		if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1)
		{
			cout<<"equilatero";
			equilatero++;
		}else{
			if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
			{
				cout<<"isosceles";
				isosceles++;
			}else{
				cout<<"escaleno";
				escaleno++;
			}
		}
	}

	cout<<"Triangulos isosceles: " <<isosceles<<endl;
	cout<<"Triangulos escaleno: " <<equilatero<<endl;
	cout<<"Triangulos escaleno: " <<escaleno<<endl;
	return 0;
}
