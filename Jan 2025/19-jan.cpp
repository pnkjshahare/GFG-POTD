// Problem Name : rotate-a-linked-list
// Problem Link : https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
// Solution :
class Solution
{
public:
    int length(Node *head)
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    Node *rotate(Node *head, int k)
    {
        // Your code here
        int len = length(head);
        k = k % len;
        Node *temp = head;
        Node *last;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        last = temp;
        // Node*NewHead;
        for (int i = 0; i < k; i++)
        {
            Node *temp = head;
            head = head->next;
            last->next = temp;
            temp->next = NULL;
            last = temp;
        }
        return head;
    }
};