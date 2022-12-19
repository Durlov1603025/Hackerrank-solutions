string timeConversion(string s) {
    string hh = s.substr(0,2);
    int h = stoi(hh);
    int size = s.size();
    if(s[8] == 'P')
    {
        if(h!=12)
        {
            int PM = h+12;
            string newh = to_string(PM);
            string newTime = newh.append(s.substr(2,6));
            return newTime;
        }
        else {
        return s.substr(0,size-2);
        }
    }
    else {
    if(h==12)
    {
        string newh = "00";
        string newTime = newh.append(s.substr(2,6));
        return newTime;
    }
    else {
    return s.substr(0,size-2);
    }
    }
    return 0;
    
}
