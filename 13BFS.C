

	#include<stdio.h>
	int n,visited[10],queue[10],front=-1,rear=-1;
	int graph[10][10];
	void BFS(int v)
	{
	int i;
	for(i=0;i<n;i++)
	{
	if(graph[v][i]==1&&visited[i]==0)
	{
	queue[++rear]=i;
	visited[i]=1;
	printf("%d\t",i);
	}
	}
	front=front+1;
	if(front<=rear)
	{
	BFS(queue[front]);
	}
	}
	void main()
	{
	int vertex,i,j,k;
	printf("enter the number of vertices");
	scanf("%d ",&n);
	for(k=0;k<n;k++)
	{
	queue[k]=0;
	visited[k]=0;
	}
	printf("enter the graph data in matrix form");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&graph[i][j]);
	}
	}
	printf("\n the matrix is :: ");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",graph[i][j]);
	}
	printf("\n");
	}
	printf("enter the starting vertex\n");
	scanf("%d",&vertex);
	queue[rear]=vertex;
	visited[vertex]=1;
	printf("%d \t",vertex);
	BFS(vertex);
	}

	BFS.c
	Displaying DFS.c.
