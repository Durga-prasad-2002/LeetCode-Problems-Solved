class Solution {
public:
    bool check(vector<int>& a) {
        int c=0;
        int n=a.size();
        if(n<=2) return 1;
        int j=-1;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                c++;
                j=i;
            }
        }
        if(c>1) return 0;
        if(c){
             while(j<n){
                 if(a[j]>a[0]) return 0;
                 j++;
             }
        }
        return 1;
    }
};