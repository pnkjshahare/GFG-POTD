// Problem Link :https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
// Problem Name :equilibrium-point
// Solution :
int findEquilibrium(vector<int> &arr)
{
    // code here
    int rSum = 0;
    for (int x : arr)
    {
        rSum += x;
    }

    int lSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        rSum -= arr[i];
        if (lSum == rSum)
        {
            return i;
        }
        else
        {
            lSum += arr[i];
        }
    }

    return -1;
}