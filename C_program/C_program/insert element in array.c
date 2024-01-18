#include<stdio.h>
int main()
{
    int arr[100],i,n,position ,value;
    printf("enter number of element in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("\n\nEnter the location where you want to insert new element:  ");
     scanf("%d", &position);
     printf("enter the value to insert: ");
     scanf("%d", &value);

     for(i= n-1; i >= position-1; i--)
        arr[i+1] = arr[i];
      arr[position - 1] = value;    // inserting the given value
      printf("\n\nResultant array is: ");
      for(i = 0; i <= n; i++)
         printf("%d  ", arr[i]);


}
