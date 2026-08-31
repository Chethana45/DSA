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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> freq;
        ListNode* temp=head;
        while(temp!=nullptr){
            freq[temp]++;
            if(freq[temp]>1)
            return temp;
            temp=temp->next;

        }
        return nullptr;
    }
};