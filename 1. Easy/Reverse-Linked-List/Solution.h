
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (current)
        {
            // Store the next node
            next = current->next;

            // Reverse the current node's next
            current->next = prev;
            prev = current;

            // Move current to next node
            current = next;
        }

        head = prev;
        return head;
    }
};