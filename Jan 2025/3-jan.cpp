// Problem Link :https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1
// Problem Name :Count Subarrays with given XOR

Solution :
long subarrayXor(vector<int> &arr, int k)
{
    // code here
    map<int, int> mpp;
    mpp[0] = 1;
    int TotalXor = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        TotalXor = TotalXor ^ arr[i];
        count += mpp[TotalXor ^ k];
        mpp[TotalXor]++;
    }
    return count;
}