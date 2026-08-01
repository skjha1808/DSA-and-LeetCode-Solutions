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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummyless = new ListNode(-1);
        ListNode* lesstail = dummyless;

        ListNode* dummygreater = new ListNode(-1);
        ListNode* greatertail = dummygreater;

        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val < x){
                lesstail->next = temp;
                lesstail = temp;
                temp = temp->next;
            }
            else {
                greatertail->next = temp;
                greatertail = temp;
                temp = temp->next;
            }
        }

        // add both list
        greatertail->next = nullptr;
        lesstail->next = dummygreater->next;

        return dummyless->next;
    }
};