string kangaroo(int x1, int v1, int x2, int v2) {
    int loc_dif = x2-x1;
    int rate_diff = v1-v2;
    
    if(v1>v2 && loc_dif%rate_diff == 0)
    {
        return "YES";
    }
    else 
    {
        return "NO";
    }
}
