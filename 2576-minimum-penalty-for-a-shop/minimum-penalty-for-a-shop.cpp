class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int>y(customers.size()+1,0);
        vector<int>n(customers.size()+1,0);
        int yy=0;
        int nn=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y') yy++;
            else nn++;
        }
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                y[i+1]=y[i]+1;
                n[i+1]=n[i];
            }
            else{
                n[i+1]=n[i]+1;
                y[i+1]=y[i];
            }
        }
        int ind;
        int min=INT_MAX;
        for(int i=0;i<y.size();i++){
            int yes=yy-y[i];
            int no=n[i];
            
            if(yes+no<min){
                ind=i;
                min=yes+no;
            }
        }
        return ind;
    }
};