// Problem Link:https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
// Problem Name:subarray-with-given-sum

// solution :
vector<int> subarraySum(vector<int> &arr, int target)
{
    // code here
    int low = 0;
    int high = 0;
    vector<int> ans;
    int n = arr.size();
    int sum = arr[0];
    while (high < n)
    {
        if (sum == target)
        {
            ans.push_back(low + 1);
            ans.push_back(high + 1);
            return ans;
        }
        if (sum > target)
        {
            sum -= arr[low];
            low++;
        }
        else
        {
            high++;
            sum += arr[high];
        }
    }
    ans.push_back(-1);
    return ans;
}