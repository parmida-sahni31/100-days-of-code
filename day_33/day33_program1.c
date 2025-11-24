//Search in a sorted array using binary search.

#include <stdio.h>

int main ()
{
   int n, key;
   printf("enter n: ");
   scanf("%d", &n);

   int arr[n];
   printf("enter %d elements in a sorted array: ", n);
   for (int i= 0; i<=n-1; i++)
   {
        scanf("%d", &arr[i]);
   }

   for (int i= 0; i<=n-1; i++)
   {
     printf("%d ", arr[i]);
   }

   printf("\nEnter element to search: ");
   scanf("%d", &key);


   int low = 1, high = n - 1;
   int found = -1;

   while (low <= high)
   {
      int mid= (low + high) / 2;

      if (arr[mid] == key)
      {
         found = mid;
         break;
      }
      else if (key > arr[mid])
      {
         low = mid + 1;
      }
      else
         high =  mid - 1;
   }

   if (found != -1)
      printf("the element %d is found at index %d.", key, found);
   else 
      printf("element does not exist.");
   return 0;
}