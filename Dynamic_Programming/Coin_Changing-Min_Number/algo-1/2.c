// Using Dynamic Memory Allocation
#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
	int Sum,N,temp;
	int i,j;
	int *coin,*A,*B;
	int count=0;
	// Input
	// N Sum
	// A[0]...A[N]
	scanf("%d%d",&N,&Sum);
	
	// Dynamic Memory Allocation for coin,A,B
	coin = (int*)malloc(N*sizeof(int));
	A = (int*)malloc((Sum+1)*sizeof(int));
	B = (int*)malloc((Sum+1)*sizeof(int));

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
