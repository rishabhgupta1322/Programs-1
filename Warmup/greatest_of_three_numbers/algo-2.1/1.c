#include<stdio.h>
int main(){
	int a,b,c,Max;
	printf("Enter the Three Numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>c){
		Max=a;
	}else if(b>a && b>c){
		Max=b;
	}else{
		Max=c;
	}
	printf("Max is :%d\n",Max);
return 0;
}
