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
    ListNode* removeZeroSumSublists(ListNode* head) {
//         ListNode* front = new ListNode(0, head);
//         ListNode* start = front;

//         while (start != nullptr) {
//             int prefixSum = 0;
//             ListNode* end = start->next;

//             while (end != nullptr) {
//                 // Add end's value to the prefix sum
//                 prefixSum += end->val;
//                 // Delete zero sum consecutive sequence 
//                 // by setting node before sequence to node after
//                 if (prefixSum == 0) {
//                     start->next = end->next;
//                 }
//                 end = end->next;
//             }

//             start = start->next;
//         }
//         return front->next;
        
        ListNode* front = new ListNode(0, head);
        ListNode* curr = front;
        int psum =0;
        unordered_map<int, ListNode*> mp;
        mp[0] = front;
        
        while(curr != NULL){
            psum += curr -> val;
            mp[psum] = curr;
            curr = curr -> next;
        }
        
        psum =0;
        curr = front;
        
        while(curr != NULL){
            psum += curr -> val;
            curr -> next = mp[psum] -> next;
            curr = curr -> next;
        }
        return front-> next;
    }
};