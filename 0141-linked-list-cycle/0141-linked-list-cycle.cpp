class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(!head) return false;
        
        ListNode* n = head;
        ListNode* nn = head->next;

        while(nn && nn->next)
        {
            if(n == nn) return true;

            n = n->next;
            nn = nn->next->next;

            if(!nn) return false;
        }

        return false;
    }
};