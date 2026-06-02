/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a= headA;
    struct ListNode *b=headB;
    while(a!=b){
        if(a==NULL)
            a=headB;
         else
         a=a->next;
         if(b==NULL)
         b=headA;
         else
         b=b->next;
    }

    return a;
}