#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 2000

bubble_sort(int a[])
{
	int i,j,temp,z;
   
	
	for(i=0;i<=5-2;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(a[j]>a[j+1])
			{  
			   temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			}
		}
	}
	
	printf("\n Sorted array :  ");
	for(z=0;z<5;z++)
	{
		printf("%d ",a[z]);
	}
	
}
int main()
{
	int b[MAX];
    int v;

    for(v=0;v<MAX;v++)
{
	b[v]=rand();
}
clock_t start,end;

	
     start=clock();
    bubble_sort(b);
    end =clock();
    
    printf("Time Required : %d",end-start);
    
    
	
}
