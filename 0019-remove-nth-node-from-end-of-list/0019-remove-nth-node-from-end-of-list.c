/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

int count =0;
struct ListNode*temp = head;
while(temp!=NULL){
    count++;
    temp=temp->next;
}
if(count==n){
    return head->next;
}
temp = head;
 for(int i = 1; i < count - n; i++) {
        temp = temp->next;
    }
temp->next = temp->next->next;

    return head;

}