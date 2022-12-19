string catAndMouse(int x, int y, int z) {
    int diff1 = abs(x-z);
    int diff2 = abs(y-z);
    
    if(diff1<diff2)
    {
        return "Cat A";
    }
    else if(diff2<diff1)
    {
        return "Cat B";
    }
    else 
    {
        return "Mouse C";
    }
}
