/* Given an integer array arr, return an array ans such that ans[i] is equal to the product of 

 all the elements of arr except arr[i]*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int n;
	cout<<"give the size of array:";				//4
	cin>>n;
	cout<<"give elements of array:"<<endl;		
	
	int arr[n],ans[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		ans[i]=1;							//1 2 3 4
	}
	
	for(int i=0; i<n; i++){						//i=0;
		for(int j=0; j<n; j++){					//	j=0 1		
			if(i==j){		
				continue;
			}else{
				ans[i]*=arr[j];
			}
		}	
	}
	
	cout<<"ans array is:"<<endl;
	for(int i=0; i<n; i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
