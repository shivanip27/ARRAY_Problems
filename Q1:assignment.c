#include<stdio.h>
#define SIZE 10
main()
{
int arr[SIZE],i,sum,pro;

printf("Enter the array elements:\n");

for(i=0;i<SIZE;i++)
scanf("%d",&arr[i]);

for(i=0;i<SIZE;i++)
printf("%d\t",arr[i]);

for(i=0,sum=0,pro=1;i<SIZE;i++)
{
    if(arr[i]%2==0)
       sum = sum + arr[i];
    
        else
        {
            pro = pro * arr[i];
        }
}
printf("Addition=%d\n",sum);
printf("Product = %d\n",pro);
}
