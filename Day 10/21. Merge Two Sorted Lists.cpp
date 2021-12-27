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
    
    
    ListNode* mergeTwoLists(ListNode* r1, ListNode* r2) {
        
        if(r1==NULL && r2==NULL){
            return NULL;
        }
        
        if(r1==NULL){
            return r2;
        }
        
        if(r2==NULL){
            return r1;
        }
        
        if(r1->val < r2->val){
            r1->next = mergeTwoLists(r1->next,r2);
            return r1;
        }
        else{
            r2->next = mergeTwoLists(r1,r2->next);
            return r2;
        }
    }
};
