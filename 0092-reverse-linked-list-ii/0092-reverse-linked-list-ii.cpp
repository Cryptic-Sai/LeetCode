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
    
    ListNode* reverse(ListNode* &head){
        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        
        while( curr != NULL){
            forward = curr-> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if( head == NULL || head -> next == NULL){
           return head; 
        }
      
        ListNode* prev1 = NULL;
        ListNode* start = head;
        ListNode* prev2 = NULL;
        ListNode* end = head;
        int c1 =1, c2 = 1;
        if(c1 != left ){
            while( start != NULL){
                if(c1 == left){
                        break;
                }
                c1++;
                prev1 = start;
                start = start -> next;
            }
        }
        
        
        while( end != NULL){
            if(c2 == right){
                    break;
            }
            c2++;
            prev2 = end;
            end = end-> next;
        }
        prev2 = end;
        end = end-> next;
           
        if(prev1 != NULL){
            prev1 -> next = NULL;
        }
        prev2 -> next = NULL;
        start = reverse(start);
        
        ListNode* ans;
        if(prev1 != NULL){
            ans = head;
            prev1 -> next = start;
        }
        else{
             ans = start;
        }
        
        while(start -> next != NULL){
            start = start -> next;
        }
        start -> next = end;
        
        return ans;
        
      }
   };