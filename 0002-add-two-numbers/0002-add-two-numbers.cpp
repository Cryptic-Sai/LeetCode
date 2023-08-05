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

// // //         Dummmy node will give me the head of linked list
//         ListNode* dummy = new ListNode();
//         ListNode* temp = dummy;
//         int carry =0;
        
//         while(l1 != NULL || l2 != NULL || carry){
//             int sum =0;
//             if(l1 != NULL){
//                 sum += l1-> val;
//                 l1= l1-> next;
//             }
//             if(l2 != NULL){
//                 sum += l2-> val;
//                 l2= l2-> next;
//             }
            
//             sum += carry;
//             carry = sum/10;
// //             After carrying part alwaysfresh node will be created
// //             creating a new fresh so that we can store sum %10
//             ListNode* fresh = new ListNode(sum % 10); 
//             temp -> next = fresh;
// //             moving of temp to next index 
//             temp = temp->next; 
//         }
//         return dummy -> next;
class Solution {
public:
    
//     ListNode* reverse(ListNode* head){
        
//         if(head == NULL || head -> next == NULL){
//             return head;
//         }
        
//         ListNode* prev = NULL;
//         ListNode* forward = NULL;
//         ListNode* curr = head;
        
//         while(curr != NULL){
//             forward = curr->next;
//             curr-> next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;        
//     }
    
//     ListNode* add(ListNode* l1, ListNode* l2){
//         ListNode* ansHead = NULL;
//         ListNode* ansTail = NULL;
//         int carry =0;
        
//         while(first != NULL || second != NULL || carry !=0){
//             int val1 =0;
            
//         }
//     }
    
//     ListNode* reverse(ListNode* head){
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* forward = NULL:
        
//         while(curr != head){
//             forward = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         ListNode* first = reverse(l1);
//         ListNode* second = reverse(l2); 
//         Node* ans = add(l1 ,l2);
//         ans = reverse(ans);
//         return ans;
        
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry =0;
        
        while(l1 != NULL || l2 != NULL || carry ){
            int sum =0;
            if(l1 != NULL){
                sum +=  l1-> val;
                l1 = l1-> next;
            }
            if(l2 != NULL){
                sum += l2-> val;
                l2 = l2 -> next;
            }
            
            sum += carry;
            carry = sum/10;
            
            ListNode* ans = new ListNode(sum % 10);
            temp -> next = ans;
            temp = temp -> next;
        }
        return dummy -> next;
    }
};