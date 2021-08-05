//There are 4 prisoners and 6 pieces of candy. The prisoners arrange themselves in seats numbered 1 to 4 .
//Let’s suppose two are drawn from the hat. 
//Prisoners receive candy at positions 2,3,4,1,2,3. The prisoner to be warned sits in chair number 3
//
//
//
//Input Format
//
//The first line contains an integer t, denoting the number of test cases.
//The next t lines each contain 3 space-separated integers:
//– : n the number of prisoners
//– : m the number of sweets
//– : s the chair number to start passing out treats at 
//Output Format
//
//For each test case, print the chair number of the prisoner who receives the awful treat on a new line.
//Sample Input 
//
//     2
//     5 2 1
//     5 2 2
//
//Sample Output
//
//    2
//    3



#include <stdio.h>
int main()
{
    int t,j,i,count=0;
    long int ncr;
    long int result,diff;
    scanf("%d",&t);
    long int n[t];
    long int m[t];
    long int s[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld",&n[i],&m[i],&s[i]);
    }
    for(i=0;i<t;i++)
    {
        count=(n[i]-s[i])+1;
        if(count>=m[i])
        {
            result=(s[i]+m[i])-1;
            printf("%ld\n",result);
        }
        if(count<m[i])
        {
            diff=m[i]-count;
            while(diff>n[i])
            {
                diff=diff-n[i];
            }
            printf("%ld\n",diff);
        }
    }
    return 0;
}
