class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n=matrix.size();
        int m=matrix[0].size();
        while(i<n){
            if(target>=matrix[i][0]&&target<=matrix[i][m-1]) break;
            i++;
        }
        cout<<i<<endl;
        if(i>=n) return 0;
        if(target==matrix[i][0]||target==matrix[i][m-1]) return 1;
        int j=0,k=m-1,mid;
        while(j<=k){
            mid=(j+k)/2;
            if(matrix[i][mid]==target) return true;
            else if(matrix[i][mid]>target) k=mid-1;
            else j=mid+1;
        }
        return 0;
    }
};