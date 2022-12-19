int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    int c=0;
    int n = candles.size();
    int m = candles[n-1];
    
    for(int i=0; i<n; i++)
    {
        if(candles[i] == m)
        {
            c++;
        }
    }
    return c;
}
