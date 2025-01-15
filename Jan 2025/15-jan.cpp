// Problem Name:longest-sub-array-with-sum-k
// Problem Link :https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
// Solution :

class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        // code here
        unordered_map<int, int> mpp;
        int sum = 0;
        int maxLength = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];

            if (sum == k)
            {
                maxLength = max(maxLength, i + 1);
            }
            if (mpp.find(sum - k) != mpp.end())
            {
                maxLength = max(maxLength, i - mpp[sum - k]);
            }

            if (mpp.find(sum) == mpp.end())
            {
                mpp[sum] = i;
            }
        }

        return maxLength;
    }
};