// Problem Link : https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1
// Soultion :
// brute Force:
int countPairs(vector<int> &arr, int target)
{
    // Your code here
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] >= target)
            {
                break;
            }
            else
            {
                count++;
            }
        }
    }
    return count;
}

// Optimal Solution
int countPairs(vector<int> &arr, int target)
{
    // Your code here
    int count = 0;
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        if (arr[left] + arr[right] >= target)
        {
            right--;
        }
        else
        {
            count += (right - left);
            left++;
        }
    }
    return count;
}