#include<iostream>
#include<vector>
using namespace std;
// todo: You are given the head of a singly linked-list. The list can be represented as:
// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:
// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be
//  changed.
void reorderList(ListNode* head)
{
    Listnode* curr = head;

    while (curr->next && curr->next->next)
    {
        Listnode* lst = curr;
        Listnode* seclst = curr;

        while(lst->next)
        {
            seclst = lst;
            lst = lst->next;
        }
        seclst->next = NULL;
        lst->next = curr->next;
        curr->next = lst;
        curr = lst->next;
    }
}
int main()
{
    
    cout << ;
}
// LC: Q.143