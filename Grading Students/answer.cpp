vector<int> gradingStudents(vector<int> grades) {
    int n =grades.size();
    
    for(int i=0; i<n; i++)
    {
        if(grades[i]>37)
        {
            if((grades[i]%5) == 3)
            {
                grades[i] = grades[i] + 2;
            }
            else if((grades[i]%5) == 4)
            {
                grades[i] = grades[i] + 1;
            }
        }
    }
    
    
    return grades;
}
