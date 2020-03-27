#include <bits/stdc++.h>
using namespace std;

int main(){
	/* code */
	for(int i = 0 ; i <= 1000;i++){
		if(i%3 == 0 && i%5 == 0){ 
			cout<<"FizzBuzz" << endl;
		}else if(i%5 == 0){
			cout<<"Buzz" << endl;
		}else if(i%3 == 0){
			cout<<"Fizz" << endl;
		}else{
			cout<<i << endl;
		}
	}

	return 0;
}