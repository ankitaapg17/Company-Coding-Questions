//Given an n-by-n matrix of 0’s and 1’s where all 1’s in each row come before all 0’s, 
//find the most efficient way to return the row with the maximum number of 0’s.

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define COL 4
#define ROW 4

int main()
   {
      int arr[ROW][COL]= {{1,1,1,1}, {1,1,0,0}, {1,0,0,0}, {1,1,0,0},};
      int rownum;
      int i = 0, j = COL-1;
       while(i<ROW && j>0)
           {
             if(arr[i][j]==0)
              {
                j--;
                rownum=i;
              }
             else
              i++;
            }
        printf("%d",rownum+1);
        getch();
        return 0;
   }







