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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        
        vector<int> ans;
        stack<int> st; 

        int i=0;
        while (temp) {
            while(!st.empty() and ans[st.top()]<temp->val){
                ans[st.top()] = temp->val;
                st.pop();
            }
            st.push(i);
            ans.push_back(temp->val); 

            i++;
            temp=temp->next;
        }

       
        while(!st.empty()){
            ans[st.top()] = 0;
            st.pop();
        }

        return ans;
        
    }
};