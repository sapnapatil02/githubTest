#include<stdio.h>
#include<stdlib.h>
int main()
{
/*	int *p,i;
	p= (int *)malloc(sizeof(int) *5);
	
	if(p==0)
	{
		printf("memory not allocated\n");
		return 0;
		
	}
	printf("enter the data\n");
	for(i=0; i<5 ;i++)
	scanf("%d",&p[i]);
	
	for(i=0; i<5 ;i++)
	printf("%d\n", p[i]);
	*/
	
	
int a[5]={12, 23, 65, 66, 89};
int *ip;
int (*p)[3];

ip = a;
p = a;

printf("ip= %u *ip =%u\n", ip, *ip);

printf("p=%u    *p=%u    **p=%u\n" , p, *p, **p);	
	

	
}
