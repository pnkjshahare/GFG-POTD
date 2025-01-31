// Problem Link : https://www.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1
// Problem Name :solve-the-sudoku
// Solution :
bool isvalid(vector<vector<int>> &mat, int tar, int r, int c)
{

    for (int i = 0; i < 9; i++)
    {

        if (mat[r][i] == tar || mat[i][c] == tar)
            return false;
    }

    int r1 = r - (r % 3);
    int c1 = c - (c % 3);
    for (int i = r1; i < r1 + 3; i++)
    {
        for (int j = c1; j < c1 + 3; j++)
        {
            if (mat[i][j] == tar)
                return false;
        }
    }

    return true;
}

bool helper(vector<vector<int>> &mat, int r, int c)
{

    if (r == 9)
    {
        return true;
    }
    if (mat[r][c] != 0)
    {
        return helper(mat, r, c + 1);
    }

    if (c == 9)
    {
        return helper(mat, r + 1, 0);
        ;
    }

    for (int ch = 1; ch <= 9; ch++)
    {

        if (!(isvalid(mat, ch, r, c)))
            continue;

        mat[r][c] = ch;
        if (helper(mat, r, c + 1))
            return true;
        mat[r][c] = 0;
    }

    return false;
}

void solveSudoku(vector<vector<int>> &mat)
{
    // code
    helper(mat, 0, 0);
}