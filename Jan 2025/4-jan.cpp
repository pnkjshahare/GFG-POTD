// Problem Link : https://www.geeksforgeeks.org/problems/count-all-triplets-with-given-sum-in-sorted-array/1
// Problem Name : Count all triplets with given sum in sorted array

// Solution : 

int countTriplets(vector<int> &arr, int target)
{
    // Code Here
    unordered_map<int, int> mp;
    mp[arr[0]]++;
    int cnt = 0;
    for (int i = 1; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            cnt += mp[target - (arr[i] + arr[j])];
        }
        mp[arr[i]]++;
    }
    return cnt;
}