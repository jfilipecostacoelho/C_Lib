int RemoveDups(int arr[], int n)
{
    int temp[n];
    
    int i, j=0;
    
    for(i = 0; i < n-1; i++)
    {
        if(v[i] != v[i+1])
        {
           temp[j++] = v[i]; 
        }
        else
        {
            temp[j++] = v[n-1];    
        }
    }
    
    for(i=0;i<10;i++)
    {
        arr[i] = temp[i];
    }
  
    return j;
}
