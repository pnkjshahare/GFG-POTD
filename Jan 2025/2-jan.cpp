// Problem Link : https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1
// Problem Name : Subarrays with sum K
// Solution :

int countSubarrays(vector<int> &arr, int k)
{
    // code here
    unordered_map<long long, int> mpp;
    mpp[0] = 1;
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (mpp.find(sum - k) != mpp.end())
        {
            count += mpp[sum - k];
        }
        mpp[sum]++;
    }
    return count;
}