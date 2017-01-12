#include<stdio.h>
#define MAX 100
int main(){
	int arr[MAX],n,i;
	int j,temp;
	// Input
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	printf("Enter the Elements of Array \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	// Calculation
	// Lets Assume :If there is only 1 number then no second Max and Min		
	if(n<=1){
		printf("Sorry There is No Second Min & Max\n");
	}else{
		// By Using Sorting 		
		for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j] = arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		// OUTPUT 
		printf("Second Min : %d\nSecond Max : %d\n",arr[1],arr[n-2]);
	}
return 0;
}
