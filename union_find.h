#define N 100
class quickfind
{

	
	int id[N];
public:
   	quickfind();


	void addedge(int i , int j);
	bool isconnected (int i , int j);
	void print (int k);


};


class quickunion
{

	int id[N];
	int weight[N];

public:

	quickunion ();

	void addedge(int i , int j);
	bool isconnected (int i , int j);
	int  root (int i);
	void print (int k);
};