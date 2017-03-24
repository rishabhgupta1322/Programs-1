#include<stdio.h>
#include<string.h>
#define MAX 50
int findPallin(char*,int,int);
int main(){
	int i,checkPallin;
	char A[MAX];
	// Input
	scanf("%s",A);
	// Calculation or function Call
	checkPallin = findPallin(A,0,strlen(A)-1);
	if(checkPallin){
		printf("Pallindrome\n");
	}else{
		printf("Not Pallindrome\n");
	}
return 0;
}
int findPallin(char *A,int start,int end){
	if(end-start<=1){
		return A[start]==A[end];	
	}
	if(findPallin(A,start+1,end-1))
		return A[start]==A[end];
	return 0;
}
