#include<stdio.h>
void main()
{
	unsigned int num,i,k,count=0,e_count=0;
	printf("enter the the number you want\n");
	scanf("%x",&num);
	for(i=0;i<32;i++)
	{
	
		if(num&(1<<i))
		{
			count++;
		}
		else if(count%2==0&&count!=0)
		{
			e_count++;
			count=0;
		}
	}
	printf("the number of conje even numbers are %d\n",e_count);
}


