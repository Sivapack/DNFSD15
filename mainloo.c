void main()
{
    int i=6;
for (i=6;i<=13;i++)
{
    if(i%2==0)
    {
    printf("even: %d\n\tStatic: %d\n", i);
    }
    //printf("Loop outer: %d\n\tStatic: %d\n", i);

    else if(i%2!=0)
    {
        printf("Odd: %d\n\tStatic: %d\n", i);
    }
    /*else()
    {
          printf("Odd: %d\n\tStatic: %d\n", i);
    }*/
    }
  }
