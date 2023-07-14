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
    
    int getlength(ListNode* head){
        
        int len=0;
        while(head != NULL){
            len ++;
            head = head -> next;
        }
        return len;
    }
    
    ListNode* getMiddle(ListNode* head){
        if(head == NULL || head ->next == NULL){
            return head;
        }
//         Not Nexesary but we can put condition for two elemets in linked list
        if(head -> next -> next == NULL){
            return head -> next;
        }
        ListNode* fast = head ->next;
        ListNode* slow = head;
        
        while(fast != NULL){
            fast = fast -> next;
            if(fast !=NULL){
                fast = fast -> next;
            }
            slow = slow -> next;
        }
        return slow;
    }
    
    ListNode* middleNode(ListNode* head) {
        
        return getMiddle(head);
//         int len = getlength(head);
//         int ans = (len)/2;
// //         Node return karna hai uska number nahi so 
// //         for that we will make temp node which we have to make it to the middle node
//         ListNode* temp = head;
//         int count =0;
//         while(count <ans){
//             temp = temp ->next;
//             count ++;
//         }
//         return temp;
    }
    
};