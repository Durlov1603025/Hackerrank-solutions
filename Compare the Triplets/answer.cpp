vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans;
    int n = a.size();
    int alice=0, bob=0;
    for(int i =0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
        else if (a[i]<b[i]) {
        bob++;
        }
        
    }
    ans.push_back(alice);
    ans.push_back(bob);
    
    return ans;
}
