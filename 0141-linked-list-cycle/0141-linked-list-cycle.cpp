/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        set<ListNode*> set;

        ListNode* n = head;

        bool isFound = false;

        while(n)
        {
            if(set.contains(n))
            {
                isFound = true;
                break;
            }

            set.insert(n);
            n = n->next;
        }

        return isFound;
    }
};