#include <stdio.h>
/**
 * prints the first 98 Fibonacci numbers
 * The numbers should be separated by comma, followed by a space 
 */
int main(void)
{
	 int n1=1,n2=2,n3,i,98
		__printf("98:");
	  scanf("%d",&98);
	  printf("\n%d %d",n1,n2);
	  for(i=2;i<98;++i)
	  {
		  n3=n1+n2;
		  printf(" %d",n3);
		  n1=n2; 
		  n2=n3;
	  }
	 return 0;
} 

