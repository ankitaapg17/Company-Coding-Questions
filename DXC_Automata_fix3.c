//Function/method secretKey ?accepts a single argument- arr? ?, a string.
//It returns an integer representing the count of all characters in it without duplicates
//(length of string after removing duplicates)
//
//Input:
//5435436789
//
//Output:
//7

int securityKey (char *a) 
{
    int i, j, len, count = 0;
    len = strlen (a);
  
    for (i = 0; i < len; i++)
    {
        int flag = 1;
        for (j = i + 1; j < len; j++)
    	{
            if (a[i] == a[j])
    	    {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
    	{
            count++;
        }
    }
    return count;
}




