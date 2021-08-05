//You will be given an array of integers and a target value. Determine the number of pairs of array elements 
//that have a difference equal to a target value.
//For example, given an array of [1, 2, 3, 4] and a target value of 1, 
//we have three values meeting the condition: 2-1 = 1, 3-2 = 1, and 4-3 = 1.
//
//
//Input Format:
//
//The first line contains two space-separated integers n and k, the size of arr and the target value.
//The second line contains n space-separated integers of the array arr.
//Sample Input:
//
//     5 2
//
//     1 5 3 4 2 
//
//Sample Output:
//
//     2


#include <stdio.h> 
int countPairsWithDiffK(int arr[], int n, int k) 
{ 
    int count = 0; 
    for (int i = 0; i < n; i++) 
    {        
        for (int j = i+1; j < n; j++) 
        {
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k ) 
            {
                count++;
            }
        } 
    } 
    return count; 
} 
int main() 
{ 
    int arr[] =  {1, 5, 3, 4, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3, result;
    result = countPairsWithDiffK(arr, n, k); 
    printf("%d",result);
    return 0; 
} 
















