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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        int count=0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0) return head;
        count-=k;
        ListNode *cur=head, *prev=nullptr;
        while(count--){
            prev=cur;
            cur=cur->next;
        }
        prev->next=nullptr;
        ListNode *tail=cur;
        while(tail->next){
            tail=tail->next;
        }
        tail->next= head;
        head=cur;
        return head;
    }
};