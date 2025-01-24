// Problem Name :detect-loop-in-linked-list
// Problem Link :https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
// Solution :
bool detectLoop(Node *head)
{
    // your code here
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}