class Solution {
public:
    string convert(string s, int numRows) {
        map<int,vector<int>>m;
        int i=0;
        int r=0,p=1;
        if(numRows==1) return s;
        while(i<s.length()){
            m[r].push_back(i);
            if(p){
                if(r==numRows-1){
                    p=0;
                    r--;
                }
                else{
                    r++;
                }
            }
            else{
                if(r==0){
                    p=1;
                    r++;
                }
                else{
                    r--;
                }
            }
            i++;
        }
        string k="";
        for(auto i:m){
            for(int j=0;j<i.second.size();j++){
                cout<<i.second[j];
                k+=s[i.second[j]];
            }
            cout<<endl;
        }
        return k;
    }
};