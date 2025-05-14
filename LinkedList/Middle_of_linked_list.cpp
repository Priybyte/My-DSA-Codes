class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;                     // slow-fast approach 
        ListNode* fast = head;

        while ( fast!= NULL && fast ->next != NULL){          //dono condition true then only work
            slow = slow ->next;
            fast = fast ->next ->next;
        }

        return slow;
    }
};
