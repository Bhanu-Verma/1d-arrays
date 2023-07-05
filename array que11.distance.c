#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2){
			float ans=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
			return ans;
		
}


int main(){
	float a[10][2];
	int i,j;
	for(i=0; i<10; i++){
		for(j=0; j<2; j++){
			scanf("%f",&a[i][j]);
		}
	}
	float ans=0.0;
	for(i=0; i<9; i++){
		ans+=distance(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
	}
	
	printf("ans=%f\n",ans);
	return 0;
}
