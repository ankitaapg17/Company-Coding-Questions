//The function sortString  modifies the input list by sorting its elements depending upon the length of the array, i.e; 
//if the length of the array is even, then the elements are arranged in the ascending order, 
//and if the length of the array is odd, then the elements are arranged in the descending order 
//
void sortArray(int len, int *arr)
{
    int i, max, location, temp, j,k;
    if(len%2 == 0)
    {
    for(i=0;i<len;i++)
    {
        max=arr[i];
        location = i;
        for(j=i;j<len;j++)
        if(max>arr[j])
        {
            max=arr[j];
            location = j;
            
        }
        temp=arr[i];
        arr[i]=arr[location];
        arr[location]=temp;
    }
    }
    else
    {
        for(i=0;i<len;i++)
    {
        max=arr[i];
        location = i;
        for(j=i;j<len;j++)
        if(max<arr[j])
        {
            max=arr[j];
            location = j;
            
        }
        temp=arr[i];
        arr[i]=arr[location];
        arr[location]=temp;
    }
    }
}

