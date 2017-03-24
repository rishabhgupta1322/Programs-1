#include<stdio.h>
#define MAX 50
float findMean(int*,int);
int main(){
	int A[MAX],N,i;
	float Mean=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	Mean = findMean(A,N-1);
	printf("%.2f\n",Mean);
return 0;
}
float findMean(int *A,int N){
	if(N<1){
		return (float)A[N];
	}else{
		return ((float)(findMean(A,N-1)*(N) + A[N]) / (N+1));
	}
}
