// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
    
//     ListNode* rev(ListNode* head){
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;
//         while(curr != NULL){
//             forward = curr->next;
//             curr ->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
    
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         // ListNode* temp = new ListNode();
//         ListNode* dummy = new ListNode();
//         ListNode* one = rev(l1);
//         ListNode* two = rev(l2);
//         ListNode* temp = dummy;
//         int carry =0;
        
//         while(one == NULL || two == NULL || carry){
//             int sum =0;
//             if(one != NULL){
//                 sum += one-> val;
//                 one = one->next;
//             }
//             if(two != NULL){
//                 sum += two-> val;
//                 two = two->next;
//             }
            
            
//             sum += carry;
//             carry= sum/10;
//             ListNode* fresh = new ListNode(sum % 10); 
//             temp -> next = fresh;
//             temp = temp->next; 
            
//         }
//         ListNode* res = rev(dummy->next);
//         return res;
//     }
// };
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
    
    ListNode* rev(ListNode* &head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* forw = NULL;
        ListNode* prev = NULL;
        ListNode* cur = head;
        
        while(cur){
            forw = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forw;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* one = rev(l1);
        ListNode* two = rev(l2);
        ListNode* ans = new ListNode(-1);
        ListNode* copy = ans;
        int carry = 0;
        
        
        while(one || two || carry){
            
            int val1 = 0;
            if(one){
                val1 = one->val;
                one = one->next;
            }
            
            int val2 = 0;
            if(two){
                val2 = two->val;
                two = two->next;
            }
            
            int tot = (val1 + val2 + carry)%10;
            carry = (val1 + val2 + carry)/10;
            
            ListNode* add = new ListNode(tot);
            copy->next = add;
            copy = copy->next;
        }
        
        ListNode* res = rev(ans->next);
        return res;
    }
};