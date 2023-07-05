/*Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the 

 two arrays into a single sorted array of size m+n.*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> v1(n), v2(n), v(2*n);
	for(int i=0; i<n; i++){
		cin>>v1[i];
		
	}
	for(int i=0; i<n; i++){
		cin>>v2[i];
	}
	
	
	
	int i=0, j=0, k=0;
	while(i<=(n-1) && j<=(n-1) ){
		if(v1[i]<v2[j]){
			v[k]=v1[i];
			i++;
			k++;
		}else{
			v[k]=v2[j];
			j++;
			k++;
		}
	}
	
	if(i==n){
		while(j!=n){
			v[k]=v2[j];
			j++;
			k++;
		}
	}
	
	if(j==n){
		while(i!=n){
			v[k]=v1[i];
			i++;
			k++;
		}
	}
	
	for(int i=0; i<(2*n); i++){
	cout<<v[i]<<" ";
	}
	return 0;
}
