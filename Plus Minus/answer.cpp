void plusMinus(vector<int> arr) {
    int n = arr.size();
    int pos=0, neg=0, zero=0;
    double pa, na, za;
    for(int i =0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
        else 
        zero++;
    }
    pa = double(pos)/ double(n);
    na = double(neg)/ double(n);
    za = double(zero)/ double(n);
    
    cout<<pa<<endl<<na<<endl<<za; 
}
