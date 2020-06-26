#include <bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin>>str;


	char arr2[8];
	char arr[str.size() +1];
	str.copy(arr, str.size() +1);
	arr[str.size()] = '\0';

	if (arr[8] == 'P'){
		if (arr[0] == '1' && arr[1] == '0'){
			arr[0] = '2';
			arr[1] = '2';
		}else if (arr[0] == '1' && arr[1] == '1'){
			/* code */
			arr[0] = '2';
			arr[1] = '3';
		}else if(arr[0] == '1' && arr[1] == '2'){
			arr[0] = '1';
			arr[1] = '2';
		}else{
			/* code */
			int a = arr[1] - '0';
			int b = a + 2;
			char c = b + '0';
			arr[0] = '1';
			arr[1] = c;

		}//0:23:34PM
	}else if (arr[8] == 'A'){
		/* code */
		if (arr[0] == '1' && arr[1] == '2'){
			/* code */
			arr[0] = '0';
			arr[1] = '0';
		}
	}

	for (int i = 0; i <= 7; ++i){
		/* code */
		arr2[i] = arr[i]; 
		cout<<arr2[i];
	}
	//arr.pop_back();
	//arr.pop_back();
	//cout<<arr2;

	return 0;
}