//Staircase pattern

void staircase(int n) {
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
            printf(" ");
            else {
            printf("#");
            }
        }
        printf("\n");
    }
    

}

