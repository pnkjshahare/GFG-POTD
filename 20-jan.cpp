// Problem Name :merge-two-sorted-linked-lists
// Problem Link :https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
// Solution :
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    // if(head1)
    Node *temp = head1;
    Node *temp1 = head2;
    Node *demo = new Node(-1);
    Node *d = demo;
    while (temp != NULL && temp1 != NULL)
    {
        if (temp->data > temp1->data)
        {
            demo->next = temp1;
            demo = temp1;
            temp1 = temp1->next;
        }
        else
        {
            demo->next = temp;
            demo = temp;
            temp = temp->next;
        }
    }
    if (temp1 != NULL)
    {
        demo->next = temp1;
    }
    if (temp != NULL)
    {
        demo->next = temp;
    }
    return d->next;
}