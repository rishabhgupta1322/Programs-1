#include<stdio.h>

//function for finding number of ways
int finding_steps(int n,int count){
    int i;
    if(n==0){
        return (++count);
    }
    else{
        //loop for selection of 3 steps
        for(i=3;i>=1;i--){
            if(n-i>=0)
                count=finding_steps(n-i,count);
        }
    }
    return count;
}

int main(){
    int n,count;
    scanf("%d",&n);
    count=finding_steps(n,0);
    printf("%d",count);
    return 0;
}
