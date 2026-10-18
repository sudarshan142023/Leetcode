/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
int length(ListNode *head)
{
    int count =0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int lenA = length(headA);
        int lenB = length(headB);

        while(lenA>lenB)
        {
            lenA--;
            headA=headA->next;
        }

        while(lenB>lenA)
        {
            lenB--;
            headB=headB->next;
        }

        while(headA && headB)
        {
            if(headA==headB) //address copmare
            return headA;

            headA=headA->next;
            headB=headB->next;
        }

    return NULL;
        
        
    }
};