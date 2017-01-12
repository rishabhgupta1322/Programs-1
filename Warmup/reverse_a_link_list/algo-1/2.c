#include<stdio.h>
#include<malloc.h>
typedef struct node{
	int info;
	struct node *next;
}node;
int main(){
	node *start=NULL,*temp;
	int N,i;		
	// Variable for Reversing 
	node *old=NULL,*curr=NULL,*next=NULL;
	// INPUT
	printf("Enter the Total Nodes Entered :");
	scanf("%d",&N);
	printf("Enter Elements\n");
	for(i=0;i<N;i++){
		// Dyanmic Memory Allocation using malloc
		temp = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->info);	
		temp->next=start;
		start=temp;
	}	
	// Output
	printf("Link-List : \n");
	temp=start;
	for(i=0;i<N;i++){
		printf("%d ",temp->info);
		temp=temp->next;
	}
	printf("\n");
	// Reverse Link-list
	curr=start;		
	old=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=old;
		old=curr;	
		curr=next;
	}
	start=old;
	// Output
	printf("Link-List After Reverse : \n");
	temp=start;
	while(temp!=NULL){
		printf("%d ",temp->info);
		temp=temp->next;
	}
return 0;
}
