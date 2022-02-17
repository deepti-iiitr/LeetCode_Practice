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
    int pairSum(ListNode* head) {
        
        stack<int>st;
        ListNode*  t=head;
        while(t!=NULL){
            st.push(t->val);
            t=t->next;
        }
        int s=st.size();
        int ans=INT_MIN;
        int i=0;
        t=head;
        while(i<=s/2){
            int x=t->val+st.top();
            i++;
            st.pop();
            t=t->next;
            ans=max(x,ans);
        }
        return ans;
    }
};