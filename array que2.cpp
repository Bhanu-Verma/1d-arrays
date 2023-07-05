/* Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index */

#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	
	for(int i=0; i<n; i++){
		cin>>arr1[i];
	}
	for(int i=0; i<n; i++){
		cin>>arr2[i];
	}
	int min_sum=INT_MAX;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int sum;
			if(i==j){
				continue;
				
			}else{
				sum=arr1[i]+arr2[j];
			}
			
			min_sum=min(min_sum,sum);
		}
	}
	cout<<min_sum;
	return 0;
}
