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

struct Compare{
    bool operator()(ListNode*a,ListNode*b){
        return a->val>b->val;
    }
};
ListNode*mergeKLists(vector<ListNode*>& lists) 
{
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;
                
                        // Step 1: Push head of every non-empty list
                            for(ListNode* node : lists) 
{
                            if(node) minHeap.push(node);
}

                                                        ListNode dummy(0); // dummy head to simplify
                                                        ListNode* tail = &dummy;

                                                                            // Step 2: Keep extracting min and pushing next
                                                                                    while(!minHeap.empty()) {
                                                        ListNode* smallest = minHeap.top(); 
                                                                                                            minHeap.pop();                                             tail->next = smallest;
                           tail = tail->next;

                                                                                                                                                if(smallest->next) {                                                                                                                                                             minHeap.push(smallest->next);
                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                                        return dummy.next;
                                                                                                                                                                                                            }
};
