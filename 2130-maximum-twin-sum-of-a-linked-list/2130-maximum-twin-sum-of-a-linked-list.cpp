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
    int pairSum(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return NULL:
//         }
//         ListNode* curr = head;
//         LsttNode* temp = head;
//         int count =0;
        
//         while(curr != NULL){
//               count ++;
//                 curr = curr -> next;
//         }
//         int sum = curr -> val + (count -1) -> val;
//         while(curr != NULL){ 
            
//         }
//         
//         By doing it in vector
        vector<int> v;
        ListNode* temp = head;
        while(temp != NULL){
            v.push_back(temp-> val);
            temp = temp -> next;
        }
            int sum =0;
            for(int i=0; i<v.size()/2; i++){
                sum = max(sum, v[i] + v[v.size()-1 -i]);
            }
            return sum;
        }
};