#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n, suma1 = 0, suma2 = 0, suma = 0;
	cin>>n;
	int arr[n][n];

	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			cin>>arr[i][j];
			if(i == j){
				suma1 += arr[i][j];
			}if(i + j == (n-1)){
				suma2 += arr[i][j];
			}
		}
	}

	suma = abs(suma1 - suma2);
	cout<<suma<<endl;

	return 0;
}