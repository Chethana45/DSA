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
 ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum,carry;
   struct ListNode* head=nullptr;
    ListNode* tail=nullptr;
    carry=0;
    while(l1||l2||carry!=0){
        sum=carry;
        if(l1)
        {
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        ListNode* newnode= new ListNode(sum%10);
        if(head==nullptr){
            head=newnode;
            tail=newnode;


        }else{
            tail->next=newnode;
            tail=tail->next;
        }
    
    
        
    }
        return head;
}};