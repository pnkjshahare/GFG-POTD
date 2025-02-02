// Problem Link :https://www.geeksforgeeks.org/problems/level-order-traversal/1
// Problem Name :level-order-traversal
// Solution :
vector<vector<int>> levelOrder(Node *root)
{
    // Your code here
    queue<Node *> q;
    vector<vector<int>> ans;
    q.push(root);
    Node *temp;

    while (!q.empty())
    {
        vector<int> curr;
        temp = q.front();
        q.pop();
        curr.push_back(temp->data);
        // left
        if (temp->left)
            q.push(temp->left);
        // right
        if (temp->right)
            q.push(temp->right);

        ans.push_back(curr);
    }

    return ans;
}
}
;