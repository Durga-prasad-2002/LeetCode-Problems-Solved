const vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
    vector<string> res;
    void solve(int i,string &digits,string &t)
    {
        if(i==digits.length())
        {
            res.push_back(t);
            return;
        }
        for(auto c:mp[digits[i]-'0'])
        {
            t.push_back(c);
            solve(i+1,digits,t);
            t.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        return res;
        string t="";
        solve(0,digits,t);
        return res;
    }
};