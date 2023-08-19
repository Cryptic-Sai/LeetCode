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
    
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            forward = curr -> next ;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
         
// //         By doing it in vector
//         vector<int> v;
//         ListNode* temp = head;
//         while(temp != NULL){
//             v.push_back(temp-> val);
//             temp = temp -> next;
//         }
//             int sum =0;
//             for(int i=0; i<v.size()/2; i++){
//                 sum = max(sum, v[i] + v[v.size()-1 -i]);
//             }
//             return sum;
        
//         Optimsed Approach
        
        ListNode* fast = head -> next;
        ListNode* slow = head;
        
        while(fast != NULL && fast -> next != NULL){
            // if(fast != NULL)
            slow = slow -> next;
                fast = fast -> next -> next;
        }
        ListNode* newhead = slow -> next;
        slow -> next = NULL;
        
        newhead = reverse(newhead);
        
        int ans = 0;
        while(head && newhead){
            ans = max(ans,(head-> val)+ (newhead  -> val));
            head = head -> next;
            newhead = newhead -> next;
        }
        return ans;
        }
};