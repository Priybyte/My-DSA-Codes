class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){

            next= curr-> next;  //pahle store karao kisi variable me taki khoye na current ki next value fir purana cnct todo aur naye ke sath jodo , ye nahi karte toh next node lost ho jata aur fir use hm access nhi kr pate
            curr->next = prev;  
            prev = curr;  // pahle agr hm curr=next krte then its like curr=[2] and fir ham prev=curr krte means prev also =[2] , means we didn't store [1] anywhere isiliye follow each steps
            curr = next;
        }

        return prev;

    }
};
