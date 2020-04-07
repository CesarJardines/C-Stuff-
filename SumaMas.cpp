#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int suma = 0;

	for (int i = 0; i < 10; ++i)
	{
		cin>>n;
		if (i >= 5){
			suma = suma + n;
		}
	}

	cout<<"La suma de los 5 numeros es: " <<suma<<endl;

	return 0;
}