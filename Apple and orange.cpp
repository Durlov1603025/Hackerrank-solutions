void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int i,j;
    int app = 0;
    int org =0;
    int n = apples.size();
    int m = oranges.size();
    for(i=0; i<n; i++)
    {
        apples[i] = apples[i] + a;
        
        if(apples[i]>=s && apples[i]<= t )
        {
            app++;
        }
    }
    
    for(i=0; i<m; i++)
    {
        oranges[i] = oranges[i] + b;
        
        if(oranges[i]>=s && oranges[i]<= t )
        {
            org++;
        }
    }
    
    cout<<app<<endl<<org;
}
