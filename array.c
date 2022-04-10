#include<stdio.h>
main()
{
	int arr[7],i,no,sum=0,f=0;
	printf("enter the elements in an array\n");
	for(i=0;i<=6;i++)
	{
	  scanf("%d",&arr[i]);

	}
	
	//display elements
	for(i=0;i<=6;i++)
	{
	  
     printf("\nelements : %d\t",arr[i]);	
	}
//even position	
	for(i=0;i<=6;i=i+2)
	{
	 printf("\nelements at even position  : %d\t",arr[i]);	
	}

//odd position	
	for(i=1;i<=6;i=i+2)
	{
	 printf("\nelements at odd position  : %d\t",arr[i]);	
	}
//addition
	for(i=0;i<=6;i++)
	{
	 sum=sum+arr[i];
	}
	printf("\naddition of elements is : %d",sum);
	
	//sum of elements at even index
	sum=0;
	for(i=0;i<=6;i++)
	{
	if(arr[i]%2==0)	
	{
	  sum=sum+arr[i];	
	}
	 
	}
	printf("\naddition of elements at even index is : %d",sum);
	
	//sum of elements at odd index
	sum=0;
	for(i=0;i<=6;i++)
	{
	if(arr[i]%2!=0)	
	{
	  sum=sum+arr[i];	
	}
	 
	}
	printf("\naddition of elements at odd index is : %d",sum);
	



	printf("\nenter the no:");
	scanf("%d",&no);
	
	
	for(i=0;i<=6;i++)
	{
	if(no==arr[i])	
	{
	  printf("\n%d is present at %d position  ",no,i);
	  f=1;
	  break;	
	}
	
	 
	}
	
	if(f==0)
	{
	printf("\n%d is not present ",no);	
	}
	
	
		
	
	

