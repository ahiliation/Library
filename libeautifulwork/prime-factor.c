#include <stdio.h>

primefactor()
{

  int num, i = 1, j, k;
  printf("Enter a number: ");
  scanf("%d",&num);
  while (i <= num)
    {
      k = 0;
      if ( num%i == 0)
	{
	  j = 1;
	  while ( j <= i )
	    {
	      if ( i%j == 0 )
		k++;
	      j++;
	    }
	  if ( k == 2 )
	    printf("\n %d is a prime factor \n",i);
	}
      i++;
    }
  return 0;
}
