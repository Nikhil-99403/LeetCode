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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)
            return head;
        ListNode* temp = head;
        ListNode* before = nullptr;
        int pos = 1;
        while (pos < left) {
            before = temp;
            temp = temp->next;
            pos++;
        }
        ListNode* prev=nullptr;
        ListNode* curr=temp;
        while(pos<=right){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            pos++;
        }
        if(before){
            before->next=prev;
        }
        else{
            head=prev;
        }
        temp->next=curr;
        return head;
    }
};
