//Function/method energyCal ?accepts two arguments-len? ?, 
//an integer representing the length of input list. energy,? a list of integers. 
//It returns an integer representing the sum of elements whose product is maximum
//for example  len = 7, energy= [9 -3 8 -6 -7 8 10]
//
//Input:
//7
//
//9 -3 8 -6 -7 8 10
//
//Output:
//19


//The maximum product of the energies is 90 i.e 9*10
//So the sum of energy of chemicals is 19.

int energyCal (int numOfChem, int *energy) 
{
  
    int numOfChem, energy[100], i, j, result, temp;
    for (i = 0; i < numOfChem; i++)
    {
        for (j = i + 1; j < numOfChem; j++)
    	{
            if (energy[i] > energy[j])
    	    {
                temp = energy[i];
                energy[i] = energy[j];
                energy[j] = temp;
            }
        }
    }
    result = energy[numOfChem - 1] + energy[numOfChem - 2];
    return result;
}


