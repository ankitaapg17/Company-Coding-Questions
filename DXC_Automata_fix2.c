//Function/method employeeID ?accepts four arguments-len? ?, an integer representing the length of input list. arr,? start , end of range and a list of integers It returns an integer representing the sum of all id’s of the employees in that range for example  
//
//len = 6,start=30,end=50, arr = [29 38 12 48 39 55]
//
//function /method will return 8 i.e 1+3+4


int employeeID (int len, int start, int end, int *arr) 
{
 
    for (i = 0; i < len; i++)
    {
          
        if (arr[i] > start && arr[i] < end)
    	{
            flag = 1;
        }
        else
    	{
            flag = -1;
        }

        if (flag == 1)
    	{
            s = s + i;
        }
    }
    return s;
}
