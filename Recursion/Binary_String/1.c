#include<stdio.h>
#include<stdlib.h>

//function for all possible Binary string
void Binary(char a[10],int n,int size){
    int i;
    if(n<1){
        for(i=0;i<size;i++)
            printf("%d",a[i]);
        printf("\n");
    }
    else{
        a[n-1]=0;
        Binary(a,n-1,size);
        a[n-1]=1;
        Binary(a,n-1,size);
    }
}

int main(){
    int n,*a;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    Binary(a,n,n);
    return 0;
}
