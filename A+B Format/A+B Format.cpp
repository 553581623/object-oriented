#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,o,p,q;
	scanf("%d %d",&a,&b);
	c=a+b;
	o=c/1000000;
	p=(c%1000000)/1000;
	q=c%1000;
	if(o!=0)
	printf("%d,%03d,%03d",o,abs(p),abs(q));
	else
	{
		if(p!=0)
		printf("%d,%03d",p,abs(q));
		else
		printf("%d",q);
	}
	return 0;
}
