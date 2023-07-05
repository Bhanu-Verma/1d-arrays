#include <stdio.h>

int main(){
	int i,j;
	int arr[10];
	for(i=0; i<9; i++){
		scanf("%d",&arr[i]);
	}
	arr[10]=0;
	int n;
	scanf("%d",&n);
	
	int *ptr=&arr[0];
	for(int i=0; i<10; i++){
		if(*(ptr+i)<=n && *(ptr+i+1)>=n){
			int t=*(ptr+i+1);
			*(ptr+i+1)=n;
			for(j=10; j>=i+3; j--){
				*(ptr+j)=*(ptr+j-1);
			}
			*(ptr+i+2)=t;
		}
	
	}
	
	for(i=0; i<10; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
