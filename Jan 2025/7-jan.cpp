// Problem Link : https://www.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1
// Problem Name : Pair with given sum in a sorted array
// Solution :

int countPairs(vector<int> &arr, int target) {
        // Complete the function
        map<int,int>mpp;
        // mpp.[0]=-1;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            int remainder=target-arr[i];
            cnt+=mpp[remainder];
            mpp[arr[i]]++;
        }
        return cnt;
    }