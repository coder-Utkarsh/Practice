#include<iostream>
#include<vector>
using namespace std;
// todo: You are given the head of a linked list. Delete the middle node, and
// return the head of the modified linked list.
// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start
// using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or
// equal to x.
ListNode* deleteMiddle(ListNode* head)
{
    int len = 0;
    ListNode* st = head;

    while(st)
    {
        st = st->next;
        len++;
    }

    if(len == 1)
        return NULL;

    len /= 2;
    len--;
    st = head;

    while (len--)
    {
        st = st->next;
    }
    st->next = st->next->next;
    return head;
}
int main()
{
    
    cout << ;
}
// LC: Q.2095