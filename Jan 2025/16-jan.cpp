// Problem Name :largest-subarray-of-0s-and-1s
// Problem Link :https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1
// Solution :
int maxLen(vector<int> &arr)
{
    // Your code here

    int sum = 0;
    int maxLen = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            sum--;
        }
        else
        {
            sum++;
        }
        if (sum == 0)
        {
            maxLen = i + 1;
        }
        if (mpp.find(sum) != mpp.end())
        {
            maxLen = max(maxLen, i - mpp[sum]);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return maxLen;
}