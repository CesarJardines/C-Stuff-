#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){		

	int suma = 0;
	int n;

	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		/* code */
		cin>>arr[i];
		suma = suma + arr[i];
	}

	cout<<suma;
	
	return 0;
}