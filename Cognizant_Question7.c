//The function maxReplace print space separated integers representing the input list after replacing 
//all the elements of the input list with the sum of all the element of the input list.

void maxReplace(int size, int *inputList)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
         sum += inputList[i];
    }
        for(i=0;i<size;i++)
        {
            inputList[i]=sum;
        }
    for(i=0;i<size;i++)
    {
        printf("%d ",inputList[i]);
    }
}



