//The function/method sameOddElementCount returns an integer representing the number of elements of the input list
//which are odd numbers and equal to the elements to its left. For example, if the input list is [1,3,3,4,5,5,9,9,10,11] 
//then the function/method should return the output ‘3’ as it has three similar groups i.e. {3,3},  {5,5}, {9,9}.


int sameOddElementCount (int size, int *inputList) 
{
    int i, count = 0;
    for (i = 1; i < size; i++)
    {
        if ((inputList[i] % 2 == 1) && (inputList[i] == inputList[i - 1]))
            count++;
    }
    return count;
}






