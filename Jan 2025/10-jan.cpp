// Problem link: https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
// Problem Name:count-distinct-elements-in-every-window
// Solution:
vector<int> countDistinct(vector<int> &arr, int k)
{
    // code here.
    vector<int> ans;
    map<int, int> mpp;
    int left = 0;
    int right = 0;
    while (right < arr.size())
    {
        mpp[arr[right]]++;
        if (right - left + 1 == k)
        {
            ans.push_back(mpp.size());
            mpp[arr[left]]--;
            if (mpp[arr[left]] == 0)
            {
                mpp.erase(arr[left]);
            }
            left++;
        }
        right++;
    }
    return ans;
}