/*Given a vector arr[] sorted in increasing order of n size and an integer x, find the number 

 of unique pairs that exist in the array whose absolute sum is exactly x*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v(5);
//	v(5)={1,2,3,4,5};
	for(int i=0; i<5; i++){
		cin>>v[i];
	}
	int x;
	cin>>x;
	int ans=0;
	int i=0, j=v.size()-1;
	while(i<j){
		if(v[i]+v[j]==x){
			ans++;
			i++;
			j--;
		}else if(v[i]+v[j]>x){
			j--;
		}else{
			i++;
		}
		
		
	}
	cout<<ans<<endl;
	return 0;
}
