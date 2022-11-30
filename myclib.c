/*
Removes duplicates numbers from a sort array
*/
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
    }
    
    for(i=0;i<10;i++)
    {
        arr[i] = temp[i];
    }
  
    return j;
}

/*
Sort Array
*/
void Sort(int v[], int n)
{
    int aux = 0, swap = 0;;
    
    for(int i=0;i<n-1;i++)
    {
        if(v[i] > v[i+1])
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            swap = 1;
        }
    }
    
    if(swap == 1)
    {
       Sort(v, 1000);
    }
}
