#include <stdio.h>
int main(int argc, char *argv[])
{
	int a[30],sum=0,b=0,i,c=0;float avg=0;
	for(i=0;i<30;i++)
	{
		b=b+2;
		a[i]=b;
		c++;
		sum=sum+a[i];
			avg=sum/5;
		if(c%5==0)
		{
			
			printf("%f  ",avg);
			
		}
		
	} 
}
