// Problem Link :https://www.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1
// Problem Name : Count the number of possible triangles

// solution :
int countTriangles(vector<int> &arr)
{
    // code here
    sort(arr.begin(), arr.end());
    int count = 0;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int low = 0;
        int high = i - 1;
        while (low < high)
        {
            if (arr[low] + arr[high] > arr[i])
            {
                count += (high - low);
                high--;
            }
            else
            {
                low++;
            }
        }
    }
    return count;
}