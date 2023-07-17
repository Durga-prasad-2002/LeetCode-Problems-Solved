/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        int i,c,j,k;
        ListNode* t1;
        t1=l1;
        ListNode* t2;
        t2=l2;
        while(t1!=NULL)
        {
            v1.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            v2.push_back(t2->val);
            t2=t2->next;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        c=0;
        for(i=0;i<v1.size()&&i<v2.size();i++)
        {
            v3.push_back(((v1[i]+v2[i]+c)%10));
            if(v1[i]+v2[i]+c>9)
                c=1;
            else
                c=0;
        }
        j=i;
        while(j<v1.size())
        {
            v3.push_back((v1[j]+c)%10);
            if((v1[j]+c)>9)
                c=1;
            else
                c=0;
            j++;
        }
        while(j<v2.size())
        {
            v3.push_back((v2[j]+c)%10);
            if((v2[j]+c)>9)
                c=1;
            else
                c=0;
            j++;
        }
        if(c>0)
            v3.push_back(c);
        t1=NULL;
        t2=NULL;
        reverse(v3.begin(),v3.end());
        for(i=0;i<v3.size();i++)
        {
            ListNode* ptr=new ListNode();
            if(t1==NULL)
            {
                t1=ptr;
                ptr->val=v3[i];
                t2=t1;
            }
            else
            {
                ptr->val=v3[i];
                t2->next=ptr;
                t2=t2->next;
            }
        }
        return t1;
    }
};