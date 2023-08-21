class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s1=s;
        for(int i=0;i<s.length()-1;i++){
            char c=s1[0];
        s1.erase(0,1);
        s1.push_back(c);
        if(s1==s) return true;
        }
        return false;
    }
};