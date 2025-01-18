// Problem Name :reverse-a-linked-list
// Problem Link : https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1
// Solution :
Node *reverseList(struct Node *head)
{
    // code here
    if (!head->next)
    {
        return head;
    }
    Node *front = head;
    Node *back = NULL;
    while (front)
    {
        Node *curr = front->next;
        front->next = back;
        back = front;
        front = curr;
    }
    return back;
}