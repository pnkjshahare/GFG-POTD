// Problem Link :https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
// Problem Name :reverse-a-linked-list-in-groups-of-given-size
// Solution

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL)
        {
            Node *next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node *reverseKGroup(Node *head, int k)
    {
        // code here
        Node *prev = NULL;
        Node *newH = NULL;

        Node *curr = head;
        int c = 0;
        int flag = 0;
        Node *x = head;
        while (curr != NULL)
        {
            c++;
            Node *next = curr->next;
            if (c == k || curr->next == NULL)
            {
                curr->next = NULL;
                Node *y = reverse(x);
                // cout<<y->data<<endl;
                if (flag == 0)
                {
                    flag = 1;
                    newH = y;
                }
                if (prev == NULL)
                {
                    prev = x;
                }
                else
                {
                    prev->next = y;
                    prev = x;
                }
                c = 0;
                x = next;
            }
            curr = next;
        }
        return newH;
    }
};