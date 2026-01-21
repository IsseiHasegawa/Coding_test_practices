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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != nullptr){
            bool isDuplicates = false;

            while (curr->next != nullptr &&
                   curr->next == curr->next->next){
                    isDuplicates = true;
                    curr = curr->next;
            }

            if (isDuplicates){
                prev->next = curr->next;
            } else {
                prev = prev->next;
            }
            curr = curr->next;
        }

        return dummy.next;
        
    }
};