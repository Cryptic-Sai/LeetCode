// class Solution {
// public:
    
// //     ListNode* reverse(ListNode* head){
        
// //         if(head == NULL || head -> next ==NULL){
// //             return head;
// //         }
// //         ListNode* prev = NULL;
// //         ListNode* curr = head;
// //         ListNode* forward = NULL;
        
// //         while(curr != NULL){
// //             forward = curr -> next  ;
// //             curr -> next = prev;
// //             prev = curr;
// //             curr = forward;
// //         }
// //         return prev;
// //     }
      
//     ListNode* removeNodes(ListNode* head) {

// //         head = reverse(head);
// //         ListNode* curr = head;
// //         int max = head -> val;
// //         ListNode* prev = head;
// //         head = head -> next;
// //         while(head != NULL){
// //             if(head -> val > max){
// //                 max =head -> val;
// //                 prev = head ;
// //                 head = prev -> next;
// //             }
// //             else{
// //                 prev -> next= head -> next;
// //                 head = prev -> next;
// //             }            
// //         } 
// //         head = reverse(curr);
// //             return head;
        
//         stack<ListNode* > st;
// }  
// };

class Solution
{
public:
       ListNode* reverse(ListNode* head){
        
        if(head == NULL || head -> next ==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            forward = curr -> next  ;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
 
    void remove(ListNode *head)
    {
        ListNode *prev = head;
        int ma = head->val;
 
        while (head)
        {
            ma = max(ma, head -> val);
            if (head->val < ma)
            {
                prev->next = head->next;
            }
            else
            {
                prev = head;
            }
            
            head = head -> next;
        }
    }
 
    ListNode *removeNodes(ListNode *head)
    {
        head = reverse(head);
        remove(head);
        return reverse(head);
    }
};


    
