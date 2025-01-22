// Problem  Link: https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1
// Problem Name :longest-distinct-characters-in-string
// Solution :

int longestUniqueSubstr(string &s)
{
    // code here
    int arr[26] = {0};
    int ans = 0;
    int low = 0;
    int high = 0;
    while (high < s.size())
    {
        arr[s[high] - 'a']++;
        while (arr[s[high] - 'a'] > 1)
        {
            arr[s[low] - 'a']--;
            low++;
        }
        ans = max(high - low + 1, ans);
        high++;
    }
    return ans;
}