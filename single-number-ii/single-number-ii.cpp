class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:nums){
            if(m[i]!=3) return i;
        }
        return 0;
    }
};