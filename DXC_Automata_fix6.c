//The? function studentSort(int? *arr, int len) accepts? an integer array arr(which is heights of students)
//of length len as an input and performs an in place sort operations on it. 
//The function is expected to return the input array sorted in descending order of their heights.


int * studentSort (int arr[], int len) 
{
  
    int small, pos, i, j, temp;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
    	{
            temp = 0;
            if (arr[i] > arr[j])
    	    {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}






