// Problem Link :https://www.geeksforgeeks.org/problems/container-with-most-water0535/1
// Problem Name :container-with-most-water
// Solution :
int maxWater(vector<int> &arr)
{
    // code here
    int TotalWater = 0;
    int low = 0;
    int high = arr.size() - 1;
    while (low < high)
    {
        int ans = ans + ((min(arr[low], arr[high])) * (high - low));
        TotalWater = max(ans, TotalWater);
        if (arr[low] < arr[high])
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return TotalWater;
}