#include<stdio.h>
#include<malloc.h>
typedef struct node{
	int info;
	struct node *next;
}node;
node* push(node*,int);
int count(node*);
int main(){
	node *start=NULL;
	int num;
	start=push(start,10);	
	start=push(start,11);	
	start=push(start,12);	
	printf("Total Elements : %d",count(start));
return 0;
}
node* push(node *start,int num){
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->info=num;
	temp->next=start;
	start=temp;
return start;
}
int count(node* start){
	int count=0;
	while(start!=NULL){
		count++;
		start=start->next;
	}
return count;
}
