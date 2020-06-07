#include<iostream>
using namespace std;

int main(){
	int n;
	n = 0;
	int falta = 0;
	cin>>n;
	falta = n;
	int array[7];
	for (int i = 0; i < 7; ++i){
		cin>>array[i];
	}
	int j = 0;
	while(falta>0){
		falta -= array[j%7];
		j++;
	}
	if(j%7 == 0){
		j=7;
	}else{
		j=j%7;
	}

	cout<<j;

	return 0;

	}	
