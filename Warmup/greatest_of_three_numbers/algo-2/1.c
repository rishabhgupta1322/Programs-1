#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the Three Numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>c){
		printf("Max is :%d\n",a);
	}else if(b>a && b>c){
		printf("Max is :%d\n",b);
	}else{
		printf("Max is :%d\n",c);
	}

return 0;
}
