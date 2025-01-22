// Problem Link :https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
// Problem Name :Trapping Rain Water
// Solution :
int maxWater(vector<int> &arr)
{
    // code here
    int leftMax = 0;
    int rightMax = 0;
    int total = 0;
    int left = 0;
    int right = arr.size() - 1;
    while (left < right)
    {
        if (arr[left] <= arr[right])
        {
            if (arr[left] <= leftMax)
            {
                total += leftMax - arr[left];
            }
            else
            {
                leftMax = arr[left];
            }
            left++;
        }
        else
        {
            if (arr[right] < rightMax)
            {
                total += rightMax - arr[right];
            }
            else
            {
                rightMax = arr[right];
            }
            right--;
        }
    }
    return total;
}