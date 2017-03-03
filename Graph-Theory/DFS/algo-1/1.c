// Header Files

// Header Files
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
// Macros
#define MAX 6
// Structure for vertex
struct Vertex{
	char label;
	bool visited;
};
// Stack Variables
int STACK[MAX];
int top=-1;
// Graph Variables
struct Vertex *lstVertices[MAX];
// Adjancy Matrx
int adjMatrix[MAX][MAX]={0};
// Vertex Count
int vertexCount=0;
// Stack Functions
void push(int item){
	STACK[++top] = item;
}
int pop(){
	return STACK[top--];	
}
int peek(){
	return STACK[top];
}
bool isStackEmpty(){
	return top == -1;
}
// Graph Functions
  // Add Vertex to the vertex list
  void addVertex(char label){
	  struct Vertex *vertex = (struct Vertex*)malloc(sizeof(struct Vertex));
	  vertex->label = label;
	  vertex->visited = false;
	  lstVertices[vertexCount++] = vertex;
  }
  // Add edge to edge array
  void addEdge(int start,int end){
	adjMatrix[start][end] = 1;
	adjMatrix[end][start] = 1;
  }
  int getAdjUnvisitedVertex(int vertex){
	int i;
	for(i=0;i<vertexCount;i++){
		if(adjMatrix[vertex][i]==1 && lstVertices[i]->visited == false){
			return i;
		}
	}
	return -1;
  }
  void displayVertex(int vertex){
	printf("%c ",lstVertices[vertex]->label);
  }
  // dfs
  void depthFirstSearch(){
	int i;

	// mark first node visited
	lstVertices[0]->visited = true;

	// display the vertex 
	displayVertex(0);
	
	// Push first element in stack
	push(0);

	while(!isStackEmpty()){
	// Select Stack top item/vertex and find all unvisited vertices
		int unvisitedVertex = getAdjUnvisitedVertex(peek()); 
		// if no adjacent vertex found then pop element from top
		if(unvisitedVertex==-1){
			pop();
		}else{
			lstVertices[unvisitedVertex]->visited = true;
			displayVertex(unvisitedVertex);
			push(unvisitedVertex);
		}

	}
	printf("\n");
	// Search is complete, Reset the DFS Flag
	for(i=0;i<vertexCount;i++){
		lstVertices[i]->visited = false;
	}
}
// Main Calling Function
int main(){
int i,j;

	addVertex('S'); //0
	addVertex('A'); //1
	addVertex('B'); //2
	addVertex('C'); //3
	addVertex('D'); //4

	   addEdge(0, 1);    // S - A
	   addEdge(0, 2);    // S - B
	   addEdge(0, 3);    // S - C
	   addEdge(1, 4);    // A - D
	   addEdge(2, 4);    // B - D
	   addEdge(3, 4);    // C - D
		
	   printf("Depth First Search: ");

	   depthFirstSearch(); 
return 0;
}
