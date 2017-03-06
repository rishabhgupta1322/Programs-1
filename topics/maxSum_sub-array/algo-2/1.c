#include<stdio.h>
#include<limits.h>
#define MAX 10
int maxSum(int[],int);
int main(){
int a[MAX],n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	// To find max sum of sub Array
	max = maxSum(a,n);
	printf("%d\n",max);
return 0;
}
int maxSum(int a[],int n){
	int max,size,start,sum,i;
	max = INT_MIN;
	for(start=0;start<n;++start){
		sum = 0;
		for(size=1;size<=n;++size){
			if((start+size) > n){
				break;
			}
			sum += a[start+size-1];		
			if(sum>max){
				max = sum;
			}
		}
	}
return max;
}
