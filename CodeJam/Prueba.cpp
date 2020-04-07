#include <bits/stdc++.h>
using namespace std;

int main(){s
	int t;
	cin>>t;
	int tmp = t;
	while(t--){
		int n,a,b;
		cin>>n;
		int matriz[n][n];
		int m = 0;
		int mul = n;
    	int array[mul];
		while(m < n){
			for(int i = 0; i<n; i++){
				for(int j = 0; j<n; j++){
					cin>>matriz[i][j];	
					m++;
				}
			}
		}
		//filas 
		int p = 0;
			for(int i = 0; i < n ; i++){
				for(int j = 0; j < n; j++){
					array[i]= matriz[j][i];
					//cout<<array[i];
					if(array[i] == matriz[j][i+1]){
						p++;		
					}
					break;
				}
				//cout<<endl;
			}
		//columnas 
		int r = 0;
			for(int i = 0; i < n ; i++){
				for(int j = 0; j < n; j++){
					array[i]=matriz[i][j];
					//cout<<array[i];
					if(array[i] == matriz[j+1][i]){
						r++;
					}
					break;
				}
				//cout<<endl;
			}


		int sum = 0;
		for(int i = 0; i<n;i++){
			for(int j = 0 ; j<n;j++){
				if(i==j){
					sum = sum + matriz[i][j];
				}
			}
		}
			
			
			
			//cout<<a;

		cout<<"Case #"<<tmp-t<<": "<<sum<<" "<<p<<" "<<r<<endl;


	} 
	return 0;
}