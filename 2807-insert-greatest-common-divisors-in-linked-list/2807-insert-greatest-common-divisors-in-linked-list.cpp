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


// ListNode* ptr = head;
//     while(ptr->next){
//         ListNode* temp = new ListNode(__gcd(ptr->val, ptr->next->val),  ptr->next);
//         ptr->next = temp;
//         ptr = temp->next;
//     }
//     return head;
// }

class Solution {
public:
    
    // int gcd(int a, int b){
    //     if(b==0) return a;
    //     return gcd(b,a%b);
    // }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;;
        }
        
        ListNode* temp = head;
        while(temp -> next){
            ListNode* prev = temp -> next;
            ListNode* ans = new ListNode(__gcd(temp -> val , temp -> next -> val), temp -> next);
            
            temp -> next = ans;
            ans -> next = prev;
            temp = prev;
        }
        
        return head;
    }
};