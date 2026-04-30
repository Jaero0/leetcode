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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head = nullptr;
        ListNode* last = nullptr;

        while(list1 != nullptr || list2 != nullptr)
        {
            ListNode* t;

            int i1 = list1 == nullptr ? 101 : list1->val;
            int i2 = list2 == nullptr ? 101 : list2->val;

            if(i1 < i2)
            {
                t = list1;
                list1 = list1->next;
            }
            else
            {
                t = list2;
                list2 = list2->next;
            }

            if(head == nullptr)
            {
                head = t;
                last = head;
            }
            else
            {
                last->next = t;
                last = last->next;
            }
        }

        return head;
    }
};