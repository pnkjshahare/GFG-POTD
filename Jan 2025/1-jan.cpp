// Problem Link :https://www.geeksforgeeks.org/problems/print-anagrams-together/1
// Problem Name :Print Anagrams Together
// Solution :
vector<vector<string>> anagrams(vector<string> &arr)
{
    // code here
    unordered_map<string, vector<string>> ans;
    for (string word : arr)
    {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        ans[sortedWord].push_back(word);
    }
    vector<vector<string>> FinalAns;
    for (auto word : ans)
    {
        FinalAns.push_back(word.second);
    }
    return FinalAns;
}