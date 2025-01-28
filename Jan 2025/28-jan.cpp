// Problem Name :permutations-of-a-given-string
// Problem Link :https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
// Solution :
vector<string> findPermutation(string &s)
{
    // Code here there
    sort(s.begin(), s.end());
    set<string> st;
    st.insert(s);

    while (next_permutation(s.begin(), s.end()))
        st.insert(s);

    return vector<string>(st.begin(), st.end());
}