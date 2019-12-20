#include<stdio.h>
#define SIZE 10
main()
{
int a[SIZE],i,j,temp;

printf("Enter the array  element:\n");

for(i=0;i<SIZE;i++)
scanf("%d",&a[i])
for(i=0;i<SIZE;i++)
printf("%d ",a[i]);

for(i=0,j=SIZE-1;i<j;i++,j--)
{
  temp = a[i];
  a[i] = a[j];
  a[j] temp;
}

printf("After reversing the array elemrnt are:\n");
for(i=0;i<SIZE;i++)
printf("%d ",a[i]);
}
