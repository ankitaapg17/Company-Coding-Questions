//WAP to find the sum of each row or column in a 2D array.



#include <stdio.h>  
   
int main()  
{  
    int rows, cols, sumRow, sumCol;  
  
      
    //Initialize matrix a  
    int a[][3] = {     
                    {1, 2, 3},  
                    {4, 5, 6},  
                    {7, 8, 9}  
                };  
      
    //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Calculates sum of each row of given matrix  
    for(int i = 0; i < rows; i++){  
        sumRow = 0;  
        for(int j = 0; j < cols; j++){  
          sumRow = sumRow + a[i][j];  
        }  
        printf("Sum of %d row: %d\n", (i+1), sumRow);  
    }  
      
    //Calculates sum of each column of given matrix  
    for(int i = 0; i < cols; i++){  
        sumCol = 0;  
        for(int j = 0; j < rows; j++){  
          sumCol = sumCol + a[j][i];  
        }  
        printf("Sum of %d column: %d\n", (i+1), sumCol);  
    }  
          
    return 0;  
}  








//WAP to find the sum of elements in each row and each column of the given matrix and print the greatest of the same.

#include

int main()
{
	int m, n, row, col, sum = 0, row_ind = 0, col_ind = 0;
	scanf(“%d %d”,&m,&n);
	int row_arr[m];
	int i, j;
	int mat[m][n];
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				scanf(“%d”,&mat[i][j]);
		}

	int z = 0;

	printf(“Sum of rows is “);
	for(row=0; row<m; row++)
		{
			sum = 0;
				for(col=0; col<n; col++)
					{
						sum += mat[row][col];
					}
			printf(“%d “,sum);
			row_arr[z++] = sum;
		}
	int temp_row = row_arr[0];
	for(i=1;i<m;i++)
		{
			if(temp_row < row_arr[i])
				{
					temp_row = row_arr[i];
					row_ind = i;
				}
}
	printf(“\nRow %d has maximum sum “, row_ind + 1);

	printf(“\nSum of columns is “);
	sum = 0;
	int y = 0;
	int col_arr[n];
	for (i = 0; i < n; ++i)
		{
			sum = 0;
			for (j = 0; j < m; ++j)
				{
					sum = sum + mat[j][i];
				}		
			printf(“%d “,sum);
			col_arr[y++] = sum;
		}
	int temp_col = col_arr[0];
	for(i=1;i<n;i++)
		{
			if(temp_col < col_arr[i])
				{
					temp_col = col_arr[i];
					col_ind = i;
				}
		}
	printf(“\nColumn %d has maximum sum “, col_ind + 1);
	return 0;
}









//assuming N*M Matrix elements are separated by space and its output be largest sum among rows and columns 
//and print the respective row or column.




int m=input.length;
  int n=input[0].length;
  int max = Integer.MIN_VALUE;
  int q = 0;
  String s = "";
  for(int i=0; i<m; i++)
  {
    int sum=0;
    for(int j=0; j<n; j++)
    {
      sum =sum +input[i][j];

    }
    if(sum>max){
      max = sum;
      q = i;
      s = "row";
    }
  }
  for(int i=0; i<n; i++)
  {
   int sum=0;
    for(int j=0; j<m; j++)
    {
      sum=sum +input[j][i];

    }
  if(sum>max){
    max = sum;
    q = i;
    s = "column";
  } 
  }
  System.out.println(s + " "  + q + " " + max);
}


