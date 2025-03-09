/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB){
            return NULL;
        }else{
        ListNode*f=headA;
        ListNode*w=headB;
        while(f!=w){
            if(f==NULL){
                f=headB;
            }else{
               f=f->next; 
            }

             if(w==NULL){
                w=headA;
            }else{
                w=w->next;
            }

            
            
        }
        return f;
        }

    }
};