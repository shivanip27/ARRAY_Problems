#include<stdio.h>
//#define SIZE 10
main()
{
int arr[5],pos,i,j,ele;
ele = sizeof(arr)/sizeof(arr[0]);

printf("Enter the array elements:\n");

for(i=0;i<ele;i++)
scanf("%d",&arr[i]);

for(i=0;i<ele;i++)
printf("%d ",arr[i]);
printf("\n");

printf("Enter the position of an array which is to be deleted:\n");
scanf("%d",&pos);

for(j=pos;j<ele;j++)
{
arr[j]= arr[j+1];

}
ele--;
printf("After deleting the element of array, array becomes:\n");
for(i=0;i<ele;i++)
    printf("%d ",arr[i]);

}
