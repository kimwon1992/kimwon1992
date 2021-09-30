#include <stdio.h>

int main (void)
{
    
    int n, i, j;

    printf("정수를 입력하시오");

    scanf("%d", &n);
    for (i = 1; i<=n; i++)
    {
	for(j=1; j<=i; j++)
	{
	    printf("*");
	}
	printf("\n");
    
    }


return 0;
}
