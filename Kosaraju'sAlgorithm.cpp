#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void dfs( int node,unordered_map<int, bool> &vis,stack<int> &st,
	vector<vector<int>>& adj){
	    vis[node]=true;
	    for(auto nbr: adj[node]){
	        if(!vis[nbr]){
	            dfs(nbr, vis, st, adj);
	        }
	    }
	    st.push(node);
	}
	
	void revDfs(int node,unordered_map<int, bool> &vis,unordered_map<int, list<int>>&adj){
	    vis[node]=true;
	    
	    for(auto nbr: adj[node]){
	        if(!vis[nbr]){
	            revDfs(nbr,vis, adj);
	            
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int> st;
        unordered_map<int, bool> vis;
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, vis, st, adj);
            }
        }
        
        unordered_map<int, list<int>>transpose;
        
        for(int i=0; i<V; i++){
            vis[i]=0;
            for(auto nbr: adj[i]){
                transpose[nbr].push_back(i);
            }
        }
        int count=0;
        while(!st.empty()){
            int top=st.top();
            st.pop();
            if(!vis[top]){
                count++;
                revDfs(top, vis, transpose);
            }
        }
        return count;
    }
};


//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

