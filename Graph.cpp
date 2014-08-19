#include "Graph.h"

#ifndef _STDIO_H

#define _STDIO_H

#include<stdio.h>

#include<stdlib.h>

#include<memory.h>

#include<iostream>
#include<queue>
#endif


using namespace std;

struct Graph * createGraph (int nodes )
{
	int i;
	struct Graph * newGraph =(struct Graph *) malloc (sizeof(struct Graph *));


	newGraph->V = nodes;

	newGraph->arrays = (GraphNode *) malloc (sizeof (GraphNode) * nodes);

	for (i=0;i<nodes;i++)
	{

		newGraph->arrays[i].head = 0;
	 
	}


	return newGraph;


}


void addUndirectedEdge (struct Graph * newGraph , int srcval , int destval)
{


	if (newGraph == NULL)
		return ;


	struct ListNode *newNode = (struct ListNode *)malloc (sizeof (ListNode *));
	newNode->dest = destval;
	newNode->next = newGraph->arrays[srcval].head;
	newGraph->arrays[srcval].head = newNode;


	
	newNode =(struct ListNode *) malloc (sizeof (ListNode *));
	newNode->dest = srcval;
	newNode->next = newGraph->arrays[destval].head;
	newGraph->arrays[destval].head = newNode;

	return;

}


void printGraphAdjList (struct Graph * newGraph)
{

	int i;

	struct ListNode *temp=NULL;

	for (i=0;i<newGraph->V ; i++)
	{
	
		printf(" \n Addjency List of %d is \n" ,i );

		temp = newGraph->arrays[i].head;

		while (temp)
		{

		printf (" %d ",temp->dest);
		temp = temp->next;

		}
	
	}


}

void DFSUtil (struct Graph *newGraph , int i , int visited[])
{
	if (!visited[i])
	{
	
		visited[i]=1;

		printf("\n%d\n " , i);

		struct ListNode *temp = newGraph->arrays[i].head;

		while (temp!=NULL)
		{
		
		
			if (!visited[temp->dest])
				DFSUtil(newGraph , temp->dest , visited);
		   
			temp=temp->next;
		}
	
	
	}


}

void DFSTraversal (struct Graph *newGraph)
{

	int *visited = (int *)malloc (sizeof(int)* (newGraph->V));
    memset (visited , 0 , sizeof(visited)*(newGraph->V));

	for (int i=0;i<newGraph->V;i++)
		DFSUtil (newGraph , i, visited );
     
}


void dijkshtrashortestpathsearch (int a[][Vertex] , int src ,int dest )
{


	int dist[Vertex] = {INT_MAX};

	int visited[Vertex]={0};

	bool sps[Vertex]={false};

	priority_queue<int ,std::vector<int>,std::greater<int>> myminheap;

	dist[src]=0;
	
	myminheap.push(src);

	while (!myminheap.empty())
	{
		int val = myminheap.top();
		myminheap.pop();

		sps[val]=true;

		for (int i=0;i<Vertex;i++)
		{
		

		
		}


	
	}


	


}


void BFSTraversal (struct Graph *newGraph ,int src)
{

	int visited[Vertex]={0};

	queue<int> myqueue;

	

	myqueue.push(src);

	visited[src]=1;

	while (!myqueue.empty())
	{
	
	
		int node = myqueue.front();

		myqueue.pop();

		printf("%d",node);

		struct ListNode *temp = newGraph->arrays[node].head;

		while (temp!=NULL)
		{
		
			if (!visited[temp->dest])
			{
			
				visited[temp->dest]=1;

				myqueue.push (temp->dest);
			
			}

			temp=temp->next;
		
		}

	
	}

}


void BFSTraversalShortestPath (struct Graph *newGraph ,int src , int dest)
{

	int visited[Vertex]={0};

	queue<int> myqueue;
	int dist[Vertex]={INT_MAX};
	

	myqueue.push(src);
	int parent[Vertex];
	visited[src]=1;

	dist[src]=0;

	while (!myqueue.empty() || !visited[dest])
	{
	
	
		int node = myqueue.front();

		myqueue.pop();

		printf("%d",node);

		struct ListNode *temp = newGraph->arrays[node].head;

		while (temp!=NULL)
		{
		
			if (!visited[temp->dest])
			{
				dist[temp->dest] = dist[node]+1;
				parent[temp->dest] = node;
			
				visited[temp->dest]=1;

				myqueue.push (temp->dest);
			
			}

			temp=temp->next;
		
		}

	
	}

	if (visited[dest])
	{
	
		printf("distance is%d\n",dist[dest]);

		while (parent[dest] != src)
		{
		    printf ("%d\n ",parent[dest]);
			parent[dest] =parent[parent[dest]];
		}
	
	}

	else
	{
	
		printf("\r\n No Path Exists");
	
	}
}


void PrimsMST  (struct  Graph *newGraph)
{



}