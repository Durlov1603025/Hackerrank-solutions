int designerPdfViewer(vector<int> h, string word) {
    int n = word.size();
    int i, Max = 0;
    int ans;
    for(i=0; i<n; i++)
    {
        Max = max(Max, h[word[i] - 'a']);
        ans = n * Max;
    }
    return ans;
}
