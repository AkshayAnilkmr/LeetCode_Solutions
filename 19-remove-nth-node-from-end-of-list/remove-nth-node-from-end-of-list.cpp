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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode*temp=head;

        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int index=len-n;;
        ListNode*p=head;
        ListNode*q=NULL;
        if (index == 0) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }


        while(index>0){
            q=p;
            p=p->next;
            index--;
        }
        q->next=p->next;

       return head; 
        
    }
};