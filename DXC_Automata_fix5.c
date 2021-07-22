//Function/method nthFib ?accepts single argument-num? ?, an integer representing number. for example  num=9

int nthFib () 
{
    int a = 0;
    int b = 1;
    int c = 1;
    int num, i;
  
    for (i = 2; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
