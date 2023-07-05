		/*given an integer array(arr) and its size(n), print the count of odd and even integers present in the array*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int even=0, odd=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	
	cout<<"odd="<<odd<<"   "<<"even="<<even;
	return 0;
}
