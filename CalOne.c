#include <stdio.h>

int main(void)
{
    int n,i,j;

    printf("정수입력");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
	for(j=1; j <= i; j++)
	{
	    printf("*");
	}
	printf("\n");
    }

    return 0;

}
