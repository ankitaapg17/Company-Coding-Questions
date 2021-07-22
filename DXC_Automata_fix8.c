//Note: If there is a ?Time limit exceeded error,?  it can be due to an infinite loop.?

//The function binarySearch(int*? arr,int len, int target) performs the binary search algorithm to look for an element target? 
//in the input array arr? of length len? ?. In case it is found the function returns the index of target? ? in arr? ? 
//and returns a-1 if not found. 

//Input:
//[0 , 2 , 3 , 4 , 5,  6 , 7 , 8] , 8 , 4
//
//Expected Return Value:
//3

int binarySearch (int *ar, int len, int target) 
{
  
    int lo = 0, hi = len;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (ar[mid] == target)
    	{
            return mid;
        }
        else
    	{
            if (ar[mid] < target)
    	    {
                lo = mid;
            }
        	else
    	    {
                hi = mid - 1;
            }
        }
    }
    return -1;
}





