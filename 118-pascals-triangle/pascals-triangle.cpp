class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
  vector<int>a;
  a.push_back(1);
  v.push_back(a);
  for(int i=1;i<n;i++){
    vector<int>b;
    for(int j=0;j<i+1;j++){
       int sum=0;
      if(j==0){
        sum+=v[i-1][j];
      }
      else if(j==i){
        sum+=v[i-1][j-1];
      }
      else{
        sum+=v[i-1][j-1];
        sum+=v[i-1][j];
      }
      b.push_back(sum);
    }
    v.push_back(b);
  }
  return v;
    }
};