#include <stdio.h>
/**
 * prints the first 98 Fibonacci numbers
 * The numbers should be separated by comma, followed by a space 
 */
int main(void)
{
int arr[3]={0,1,0},n;

n=10;//user input 

// series formation
for(int i=3;i<=n+3;i++)
	printf("\n%d",arr[i%3]=arr[(i+1)%3]+arr[(i+2)%3]);

return 0; 
}
