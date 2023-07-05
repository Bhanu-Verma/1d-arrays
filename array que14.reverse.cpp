		/*reverse an array*/
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
	int l=0;
	int r=n-1;
	while(l<r){
		swap(arr[l++],arr[r--]);
	}
}

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,n);
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
