class Solution {
public: 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int tmp = 0;

        while (l1 != nullptr || l2 != nullptr || tmp != 0) 
        {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + tmp;
            int digit = sum % 10;
            tmp = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead; //free mem
        return result;
    }
};