	
#define Vertex 9
extern struct Graph * createGraph (int nodes );

extern void addUndirectedEdge (struct Graph * newGraph , int srcval , int destval);

extern void BFSTraversal (struct Graph *newGraph ,int src);
extern void DFSTraversal (struct Graph *newGraph);
extern void printGraphAdjList (struct Graph * newGraph);
extern void BFSTraversalShortestPath (struct Graph *newGraph ,int src , int dest);
struct ListNode
{


	int dest;

	struct ListNode *next;

};


struct GraphNode
{

	struct ListNode *head;
	
};
struct Graph
{

  int V;


  struct GraphNode *arrays;
};




