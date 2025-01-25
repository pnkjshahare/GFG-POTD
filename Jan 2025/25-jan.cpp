// Problem Link :https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1
// Problem Name :find-the-first-node-of-loop-in-linked-list
// Solution :
class Solution
{
public:
    Node *findFirstNode(Node *head)
    {
        // your code here
        if (head == NULL)
        {
            return NULL;
        }
        Node *slow = head;
        Node *fast = head;
        while (slow != NULL && fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
            // dedect loop
            if (fast == slow)
            {
                break;
            }
        }
        if (slow != fast)
        {
            return NULL;
        }

        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};