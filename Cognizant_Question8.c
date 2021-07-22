//The function replaceElements is modifying the input list in such a way – 
//if the sum of all the elements of the input list is odd, then all the elements of the input list are 
//supposed to be replaced by 1s, and in case if the sum of all the elements of the input list  is even,
//then the elements should be replaced by 0s.


void replaceElements(int size, int *arr)
{
    int i,j;
    int sum=0;
    for (i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    if(sum % 2 == 0)
    {
        i=0;
        while(i<size) 	
        {
            arr[i] = 0;
            i += 1;
            
        }
    }
    else
    {
        j=1;
        while(j<size)
        {
            arr[j]=1;
            j+=1;
        }
    }










