class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* n = head;
        ListNode* nn = head->next;

        bool isFound = false;

        while(true)
        {
            if(n == nn)
            {
                isFound = true;
                break;
            }

            n = n->next;

            if(nn && nn->next)
            {
                nn = nn->next;

                if(nn->next)
                {
                    nn = nn->next;
                }
            }
            else
            {
                break;
            }
        }

        return isFound;
    }
};