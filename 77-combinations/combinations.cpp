class Solution {
public:
    void solve(int i,int n,int k,vector<vector<int>>& v1,vector<int>& v,vector<int>& t)
    {
        if(i==n)
        {
            if(t.size()==k)
            {
                v1.push_back(t);
            }
            return;
        }
        t.push_back(v[i]);
        solve(i+1,n,k,v1,v,t);
        t.pop_back();
        solve(i+1,n,k,v1,v,t);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>v1;
        vector<int>v(n,0);
        vector<int>t;
        for(int i=0;i<n;i++)
            v[i]=i+1;
        solve(0,n,k,v1,v,t);
        return v1;
    }
};