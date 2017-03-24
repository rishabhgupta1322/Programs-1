#include<stdio.h>
#define MAX 50
int findSum(int*,int);
int main(){
	// Variable Declaration
	int A[MAX],N,i,sum=0;
	// Input
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}	
	sum = findSum(A,N-1);
	// Output
	printf("%d\n",sum);
return 0;
}
int findSum(int *A,int N){
	if(N<0){
		return 0;
	}
	else{
		return (findSum(A,N-1) + A[N]);
	}
}
