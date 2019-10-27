//user:namanvats
//Depth First Traversal algorithm to traverse all nodes of an undirected graph
//Assumption: Graph has only one component and undirected
//Language Used: C++


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int visit[100000];
vector<int> vec[10000];
void precompute()
{
    //This function sets the visit array to zero.
	for(int i=0;i<100000;i++)
		visit[i]=0;     //Visit array will be used to make sure which nodes have been visited or not.
}
void dfs(int s)
{
	visit[s]=1;
	cout<<s<<'\n';      //Here we print the nodes which are being visited in dfs manner.
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visit[vec[s][i]])
			dfs(vec[s][i]);
	}
}
int main()
{
	precompute();
	int nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	int source;
	cin>>source;
	dfs(source);
	return 0;
}
