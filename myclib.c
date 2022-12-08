// Calculates the sum of a number using the fibonacci sequence
int fibonacci(int n)
{
    int n, z, x = 1, y = 2, i = 3;
 
    for (i; i <= n; i = i + 1)           
    {                                       
        z = x + y;
        x = y;
        y = z;
        printf("\n  fib(%d)=%d",i, z);
    }                      
    
    return z;
}
//----------------------------------------------------------------------------------------------
// Removes duplicates numbers in a sorted array
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
//----------------------------------------------------------------------------------------------
// Sort Array
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
//----------------------------------------------------------------------------------------------
// Prints a float with two decimals
void TwoDecimals(float num)
{
    printf("%.2f ", num);
}
