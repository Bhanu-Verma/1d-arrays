#include <stdio.h>
#include <math.h>
int sigma(float *ptr, int n){
	double sum=0.0;
	int i;
	for(i=0; i<n; i++){
		sum+=*(ptr+i);
	}
	return sum;
}

int main(){
	int n,i;
	scanf("%d",&n);
	float x[n], y[n];
	float product[n],square[n];
	printf("give the coordinates of all the points");
	for( i=0; i<n; i++){
		scanf("%f %f",&x[i],&y[i]);
		product[i]=x[i]*y[i];
		square[i]=x[i]*x[i];
	}
	
	double m,c;
	
	m=(n*sigma(product,n)-sigma(x,n)*sigma(y,n))/n*sigma(square,n)-pow((sigma(x,n)),2);
	//printf("m=%Lf\n",m);
	
	return 0;
}
