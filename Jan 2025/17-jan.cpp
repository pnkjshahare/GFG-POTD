// Problem Name :product-array-puzzle
// Problem Linkhttps://www.geeksforgeeks.org/problems/product-array-puzzle4525/1
// Solution :

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &arr)
    {
        // code here
        int zeroCount = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                zeroCount++;
            }
        }

        if (zeroCount == 0)
        {
            int product = 1;
            for (int i = 0; i < arr.size(); i++)
            {
                product *= arr[i];
            }
            vector<int> ans;
            for (int i = 0; i < arr.size(); i++)
            {
                ans.push_back(product / arr[i]);
            }
            return ans;
        }
        if (zeroCount == 1)
        {
            int product = 1;
            vector<int> ans(arr.size(), 0);
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] != 0)
                {
                    product *= arr[i];
                }
            }
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] == 0)
                {
                    ans[i] = product;
                }
            }
            return ans;
        }

        vector<int> ans(arr.size(), 0);
        return ans;
    }
};