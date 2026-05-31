/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode*temp=head;
    while(temp!=NULL &&temp->next!=NULL){
        if(temp->val==temp->next->val){
            temp->next=temp->next->next;
        }
        else {
            temp=temp->next;
        }
    }

    return head;
}