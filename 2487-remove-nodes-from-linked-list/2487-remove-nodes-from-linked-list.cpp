class Solution {
public:
    
//     ListNode* reverse(ListNode* head){
        
//         if(head == NULL || head -> next ==NULL){
//             return head;
//         }
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;
        
//         while(curr != NULL){
//             forward = curr -> next  ;
//             curr -> next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
      
//     ListNode* removeNodes(ListNode* head) {

//         head = reverse(head);
//         ListNode* curr = head;
//         int max = head -> val;
//         ListNode* prev = head;
//         head = head -> next;
//         while(head != NULL){
//             if(head -> val > max){
//                 max =head -> val;
//                 prev = head ;
//                 head = head -> next;
//             }
//             else{
//                 prev -> next= head -> next;
//                 head = prev -> next;
//             }            
//         } 
//         head = reverse(curr);
//             return head;
// }
    
// };

//     ListNode* removeNodes(ListNode* head) {
//         if (!head) return NULL;
//         head->next = removeNodes(head->next);
//         return head->next && head->val < head->next->val ?  head->next : head;
//     }
// };
    
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* nextN = removeNodes(head->next);
        if(nextN->val > head->val) {
            return nextN;
        }
        head->next = nextN;
        return head;
    }
    
};