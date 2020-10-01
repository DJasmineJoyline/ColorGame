#include<stdio.h>
int main()
{
	int n,i,j=0,k=0,a[100],count=0,v=0;
	printf("Enter the number of students Rita asked\n");
	scanf("%d",&n);
	printf("Enter the answers given by each student");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	v=a[i];
	if(a[i]!=0)
	{
	    if(j==v)
	    {
	        k=0;
	        j=0;
	    }
	    if(v!=k)
	    {
	        count+=a[i]+1;
	        j=0;
	    }
	    else
	    j++;
	}
	else
	count++;
	k=a[i];
	}
	
	printf("Total number of students present in class=%d",count);
	
	
	return 0;
}
