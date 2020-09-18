#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiplication(int*);
 
int main()
{
	int m;
	
	printf("Enter multiplication table : ");
	scanf("%d",&m);

	multiplication(&m);
	return 0;
}

int multiplication(int *p)
{
	int num[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	if(*p>0 || *p!=0)
	{		
		if (*p>0 && *p!=0)
		{
		printf("Multiplication : %d\n",*p);
			for(int i=0;i<12;i++)
				{
					printf("%d x %d = %d\n",*p,num[i],num[i]*(*p));
				}	
		}
	
	}
		if(*p==0)
		{
			printf("Zero times anything . It = Zero.");
		}
		
}
