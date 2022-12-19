int diagonalDifference(vector<vector<int>> arr) {
    int i=0,ls=0,rs=0;
    int n= arr.size();
    int j=n-1;
    while(i<n)
    {
        ls = ls + arr[i][i];
        rs = rs + arr[i][j];
        i++;
        j--;
    }
    int diff = abs(ls-rs);
    return diff;
}
