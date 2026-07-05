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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        for (int i = 0; i < n; ++i) {
            if (fast->next == nullptr) {
                delete dummy;
                return head;
            }
            fast = fast->next;
        }
        
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next; // Skip the target node
        
        delete nodeToDelete; // Free up the memory
        
        // 5. Get the new head and delete the temporary dummy node
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};
