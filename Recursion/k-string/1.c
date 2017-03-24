#include<stdio.h>
#include<stdlib.h>
//function to generate k-strings
void k_string(int a[],int n,int k,int size){
    int j;
    if(n<1){
        for(j=0;j<size;j++)
            printf("%d",a[j]);
            printf("\n");
    }
    else{
        for(j=0;j<k;j++){
            a[n-1]=j;
            k_string(a,n-1,k,size);
        }
    }
}

int main(){
    int n,k,*a;
    printf("Enter length of string and value k through which you want to generate number\m");
    scanf("%d %d",&n,&k);
    a=(int *)malloc(sizeof(int)*n);
    k_string(a,n,k,n);
    return 0;
}
