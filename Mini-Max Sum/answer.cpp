void miniMaxSum(vector<long> arr) {
    sort(arr.begin(), arr.end());
    long long int Min=0, Max=0;
    Min = arr[0] + arr[1] + arr[2]+ arr[3];
    Max = arr[4] + arr[1] + arr[2]+ arr[3];
    
    cout<<Min<<" "<<Max;
}
