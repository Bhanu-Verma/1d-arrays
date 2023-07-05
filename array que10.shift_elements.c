#include <stdio.h>

void shift(int *ptr, int n){
	int i;
	int t1=*ptr;
	int t2=*(ptr+1);
	for(i=0; i<n-2; i++){
		*(ptr+i)=*(ptr+i+2);
	}
	*(ptr+n-2)=t1;
	*(ptr+n-1)=t2;
}
int main(){
	int i;
	int p[5]={15,30,28,19,61};
	int *ptr=&p[0];
	shift(ptr, 5);
	for(i=0; i<5; i++){
		printf("%d ",p[i]);
	}
	return 0;
}
