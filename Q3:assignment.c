#include<stdio.h>
#define SIZE 5
main()
{
	int arr1[SIZE], N_arr[SIZE],i,j,k=0,c=0,p=0,t=0;

	printf("Enter the array element: ");
	for(i=0;i<SIZE;i++)
	scanf("%d",&arr1[i]);

	for(i=0;i<SIZE;i++)
	printf("%d ",arr1[i]);
	printf("\n");

	for(i=0;i<SIZE;i++)
	{
		for (j=2;j<arr1[i];j++)
	{
        if(arr1[i] % j ==0)
		break;
	}
       if(j==arr1[i])
		{
			p++;
			//printf("%d ",arr1[i]);
			N_arr[k++]=arr1[i];
		}
	}
	//printf("\n");
    printf("The count of prime nos in array is = %d\n",p);

    	for(k=0;k<p;k++)
    	{
    	printf("%d ",N_arr[k]);
    	}
    	printf("\n");
}
