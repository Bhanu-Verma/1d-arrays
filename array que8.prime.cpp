#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100];
	for(int i=0; i<100; i++){
		arr[i]=i+1;
	}
	
	for(int j=2; j<100; j++){
		for(int i=0; i<100; i++){
			if(arr[i]%j==0 && arr[i]>j){
				arr[i]=0;
			}
		}
	}
	
	for(int i=0; i<100; i++){
		if(arr[i]!=0){
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
