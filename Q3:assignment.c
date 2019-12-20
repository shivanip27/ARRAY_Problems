#include<stdio.h>
#define SIZE 5
main()
{
	int arr1[SIZE], N_arr[SIZE],i,j,k,c=0,p=0;
	
	printf("Enter the array element: ");
	
	for(i=0;i<SIZE;i++)
	scanf("%d",&arr1[i]);
	
	for(i=0;i<SIZE;i++)
	printf("%d ",arr1[i]);
	
	printf("\n");
	
	for(k=0;k<SIZE;k++)
	{
		for (j=2,c=0,p=0;j<arr1[k];j++)
	{
		
		if(arr1[k] % j ==0)
	  {
		c=1;
		break;
	  }
        }
		if(c==0)
		{
			N_arr[p]=arr1[i];
            p++;			
		}
	}
	
	printf("The count of prime nos in array is = %d\n",p);
    	for(k=0;k<p;k++)
    	printf("%d ",N_arr[k]);
    	printf("\n");
}
