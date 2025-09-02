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

    ListNode* Reverse(ListNode *cur, ListNode *prev){
        if(cur==nullptr) return prev;

        ListNode *fut=cur->next;
        cur->next=prev;
        return Reverse(fut, cur);
    }

    ListNode* reverseList(ListNode* head) {
        return Reverse(head, nullptr);
    }
};