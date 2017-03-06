#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX 100
#define S_MAX 1000
int main(){
	int Sum,N,temp;
	int i,coin[MAX],j;
	int A[S_MAX],B[S_MAX];
	int count=0;
	// Input
	// N Sum
	// N...i
	scanf("%d%d",&N,&Sum);
	for(i=0;i<N;i++){
		scanf("%d",&coin[i]);
	}
	// Setting Value Using
	for(i=0;i<=Sum;i++){
		A[i] = INT_MAX - 1;
		B[i] = -1;
	}
	// Initialise with 0
	A[0] = 0;	
	for(i=0;i<N;i++){

		for(j=0;j<=Sum;j++){
			temp = j-coin[i];
			if(temp>=0){
				if(1+A[temp] < A[j]){
					A[j] = 1+A[temp];
					B[j] = i;
				}
			}
		} 
	}
	i=Sum;
	temp = coin[B[i]];
	while(i>0){
		printf("%d ",temp);
		i = i - temp;
		temp = coin[B[i]];
		count++;
	}
	printf(" , Minimun Required : %d\n",count);

}
