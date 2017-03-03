#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100002];
    scanf("%s",str);
    int i,count=0,val=0,lt[27]={0},tot=0;
    // To count the no of elements
    for(i=0;i<strlen(str);i++){
        lt[str[i]-'a']++;
    }
    // To get the common value
    for(i=0;i<26;i++){
        if(lt[i]){
            if(count==0){
                val = lt[i];
                count=1;
            }else{
                if(val==lt[i]){
                    count++;
                }else{
                    count--;
                }
            }
        }
    }
	printf("Common Occurence : %d\n",val);
return 0;
}
