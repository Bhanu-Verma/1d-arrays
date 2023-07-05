	/*d the element in the array for which all the elements
 to its left are smaller than it and all the elements to the right of it are larger than it*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int maxtilli[n];
	int mintilli[n];
	maxtilli[0]=arr[0];
	for(int i=1; i<n; i++){
		maxtilli[i]=max(maxtilli[i-1],arr[i]);
	}
	mintilli[n-1]=arr[n-1];
	for(int i=(n-2); i>=0; i--){
		mintilli[i]=min(mintilli[i+1],arr[i]);
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]>maxtilli[i-1] && arr[i]<mintilli[i+1]){
			cout<<arr[i];
			return 0;
		}
	}
	
	return -1;
}
