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
        if(head->next==NULL) return 1;
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count/=2;
        ListNode *cur=head, *prev=NULL;
        while(count--){
            prev=cur;
            cur=cur->next;
        }
        prev->next=NULL;
        ListNode *front=NULL;
        prev=NULL;
        while(cur){
            front=cur->next;
            cur->next=prev;
            prev=cur;
            cur=front;
        }
        ListNode *head1=head, *head2=prev;
        while(head1){
            if(head1->val != head2->val){
                return 0;}
                head1=head1->next;
                head2=head2->next;
            }
        return 1;
    }
};