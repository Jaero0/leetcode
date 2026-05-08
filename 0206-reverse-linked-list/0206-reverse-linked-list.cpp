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
    ListNode* reverseList(ListNode* head) {

        if(!head) return nullptr;

        stack<ListNode*> st;

        while(head)
        {
            st.push(head);
            head = head->next;
        }

        
        ListNode* h = new ListNode();
        ListNode* tail = h;

        while(!st.empty())
        {
            tail->next = st.top();
            st.pop();
            tail = tail->next;
        }

        tail->next = nullptr;

        return h->next;
    }
};