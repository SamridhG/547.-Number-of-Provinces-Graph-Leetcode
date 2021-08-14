class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int V=isConnected.size();
        vector<int>adj[V+1];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    adj[i+1].push_back(j+1);
                }
            }
        }
        vector<int>visit(V+1,0);
        for(int i=1;i<=V;i++)
        {
            if(visit[i]!=1)
            {
                queue<int>A;
                A.push(i);
                visit[i]=1;
                ans++;
                while(!A.empty())
                {
                    int node=A.front();
                    A.pop();
                    for(auto s:adj[node])
                    {
                        if(visit[s]!=1)
                        {
                            visit[s]=1;
                            A.push(s);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
