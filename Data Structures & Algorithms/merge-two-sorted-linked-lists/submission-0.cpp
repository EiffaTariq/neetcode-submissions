class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy(0);
        ListNode* result = &dummy;

        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                result->next = l1;
                l1 = l1->next;
            }
            else
            {
                result->next = l2;
                l2 = l2->next;
            }

            result = result->next;
        }

        // Attach the remaining nodes
        if (l1 != nullptr)
        {
            result->next = l1;
        }
        else
        {
            result->next = l2;
        }

        return dummy.next;
    }
};