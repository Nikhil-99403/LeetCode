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
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return;
        ListNode* sp=head;
        ListNode* fp=head;
        while(fp != nullptr && fp->next != nullptr && fp->next->next != nullptr){
            sp=sp->next;
            fp=fp->next->next;
        }
        ListNode* curr=sp->next;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        sp->next=prev;
        ListNode* second = prev;
        sp->next = nullptr;
        ListNode* first = head;
        while(second != nullptr){
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;
            first->next = second;
            second->next = next1;
            first = next1;
            second = next2;
        }

    }
};