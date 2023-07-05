#include <stdio.h>

int main(){
	int m,n,i=0,j=0,k=0;
	printf("give the input of size of first array:");
	scanf("%d",&m);
	int a[m];
	printf("give the input of array of size %d in sorted order:\n",m);
	for(i=0; i<m; i++){
		scanf("%d",&a[i]);
	}
	
	
	printf("\n\ngive the input of size of second array:");
	scanf("%d",&n);
	int b[n];
	printf("give the input of array of size %d in sorted order:\n",n);
	for(i=0; i<n; i++){
		scanf("%d",&b[i]);
	}
	i=0;
	int ans[m+n];
	while(i<m && j<n){
		if(a[i]<b[j]){
			ans[k]=a[i];
			k++;
			i++;
		}else{
			ans[k]=b[j];
			k++;
			j++;
		}
	}
	
	while(i<m){
		ans[k]=a[i];
		k++;
		i++;
	}
	
	while(j<n){
		ans[k]=b[j];
		k++;
		j++;
	}
	
	printf("\n\narray formed by merging both the arrays in sorted order:\n");
	for(i=0; i<(m+n); i++){
		printf("%d ",ans[i]);
	}
	printf("\n");
	return 0;
}


