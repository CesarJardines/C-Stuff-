#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	long min=0,max=0,n=5;
	long arr[n];
	for (long i = 0; i < 5; ++i){
		/* code */
		cin>>arr[i];

	}

	long f = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+f);

	for (long i = 0; i < 4; ++i){
		/* code */
		min = min + arr[i];
	}

	for (long j = 4; j > 0; j--){
		/* code */
		max = max + arr[j];
	}

	
	cout<<min<<" "<<max<<endl;


	return 0;
}