#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the Three Numbers :\n");
	// Read Three Numbers 
	scanf("%d%d%d",&a,&b,&c);
	// Decision Making Statements 
	if(a>=b){
		if(a>c){
			printf("Max is :%d\n",a);
		}else{
			printf("Max is :%d\n",c);
		}
	}else if(b>a){
		if(b>c){
			printf("Max is :%d\n",b);
		}else{
			printf("Max is :%d\n",c);
		}
	}else{
		printf("Max is :%d\n",c);
	}

return 0;
}
