class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        bool hascycle = false;

        while ( fast!= NULL && fast->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;

            if (slow == fast){
                hascycle = true;
                break;
            }
        }

        if ( !hascycle ) return NULL;    //we can't return -1 or false here kyuki function (List*Node) ek pointer hai toh agr kuch nahi mila then return NULL 
        
            slow = head;

            while (slow!=fast){
                slow = slow ->next;
                fast = fast ->next;

        }

        return slow;

    }    
    
};
