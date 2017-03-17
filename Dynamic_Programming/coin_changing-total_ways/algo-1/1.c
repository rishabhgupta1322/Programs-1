#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int j,i,n,sum,temp;
    int a[251];
    unsigned long long s[251]={0};
    scanf("%d%d",&sum,&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s[0]=1;
    for(j=0;j<n;j++){
        for(i=1;i<=sum;i++){
            temp = i-a[j];
            if(temp>=0){
                s[i] += s[temp];
            } 
        }
    }
    printf("%llu\n",s[sum]);
    return 0;
}

