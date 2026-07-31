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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
                head=head->next;
            }
            int i=0;
            int j=arr.size()-1;
            while(i<j){
            if(arr[i]!=arr[j])
            return false;
            i++;
            j--;}
        
        return true;
    }
};