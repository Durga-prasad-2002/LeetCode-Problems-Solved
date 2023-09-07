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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp;
        temp=head;
        int l=left-1;
        int r=right-left;
        while(l>0){
            temp=temp->next;
            l--;
        }
        vector<int>a;
        while(r>=0){
            a.push_back(temp->val);
            temp=temp->next;
            r--;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        temp=head;
        l=left-1;
        r=right-left;
        while(l>0){
            temp=temp->next;
            l--;
        }
        int i=0;
         while(r>=0){
            temp->val=a[i];
            temp=temp->next;
            r--;
            i++;
        }
        return head;
    }
};