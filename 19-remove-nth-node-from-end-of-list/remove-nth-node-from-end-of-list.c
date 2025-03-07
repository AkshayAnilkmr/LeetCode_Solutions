/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    struct ListNode*p=head;
    struct ListNode*q=head;
    struct ListNode*r=NULL;
    while(p!=NULL&&n!=0){
        p=p->next;
        n--;
    }if(p==NULL){
        struct ListNode*temp=head;
        head=head->next;
        temp->next=NULL;
    }
    else{
    while(p!=NULL){
        r=q;
        q=q->next;
        p=p->next;
    }
    r->next = q->next;
    }
    return head;
}
    