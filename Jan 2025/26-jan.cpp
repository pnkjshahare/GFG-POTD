// Problem Link : https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
// Problem Name :remove-loop-in-linked-list
// Solution :
void removeLoop(Node *head)
{
    // code here
    Node *prev = NULL;
    Node *curr = head;
    unordered_map<Node *, int> mpp;
    while (curr != NULL)
    {
        if (mpp.find(curr) != mpp.end())
        {
            prev->next = NULL;
            return;
        }
        mpp[curr] = 1;
        prev = curr;
        curr = curr->next;
    }
}