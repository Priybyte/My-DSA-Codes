class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while ( fast!= NULL && fast->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;

            if ( fast == slow ) return true;     // agr slow == fast usi case me cycle milegi nahi toh kbhi nhi milegi
        }

        return false;
    }
};
