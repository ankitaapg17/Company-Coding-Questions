//It returns an integer representing the sum of all the elements of arr that are equal to the given integer value for example 
//
//len = 9, arr = [1,2,4,3,2,5,4,1,2], value = 2
//
//function /method will return 6


int numberCount(int len, int* arr, int value)
{
    int count = 0;
    for(int i =0 ; i < len ; i++ )
    {
        if(arr[i]==value)
        count++;
    }
    return count;
}




