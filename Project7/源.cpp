#include <stdio.h>
int main()
{
	int a[10] = { 1,2,5,6,7,9,10,12,13,16 }, b[5] = { 1,1,2,3,4 }, c[15];
	int  k, j;
	int i = j = k = 0;
	for (j=0;j<=14;j++)
		if (k < 5)
		{
			if (a[i] < b[k])
			{
				c[j] = a[i];
				printf("%d\n", c[j]);
				
				i = i + 1;

			}
			else
			{
				c[j] = b[k];
				printf("%d\n", c[j]);
				
				k = k + 1;
			}
		}
		else
		{
			c[j] = a[i];
			printf("%d\n", c[j]);
			
			i = i + 1;
		}
		
	    
	return 0;
}
