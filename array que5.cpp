/*Given a vector arr[] sorted in increasing order. Return an array of squares of each 
number sorted in increasing order*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> v(n), ans(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	for(int i=0; i<n; i++){
		v[i]*=v[i];
	}
	sort(v.begin(),v.end());
	
	
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
