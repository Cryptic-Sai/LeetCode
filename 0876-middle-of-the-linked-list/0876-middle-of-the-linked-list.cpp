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
    ListNode* middleNode(ListNode* head) {
        int len = getlength(head);
        int ans = (len)/2;
//         Node return karna hai uska number nahi so 
//         for that we will make temo node
        ListNode* temp = head;
        int count =0;
        while(count <ans){
            temp = temp ->next;
            count ++;
        }
        return temp;
    }
    
};