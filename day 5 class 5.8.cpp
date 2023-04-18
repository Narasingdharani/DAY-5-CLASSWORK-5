#include <stdio.h>

int main() {
   int arr1[] = {10, 20, 30, 40, 50, 60};
   int arr2[] = {70, 80, 90, 100, 110, 120};
   int size1 = sizeof(arr1) / sizeof(arr1[0]); 
   int size2 = sizeof(arr2) / sizeof(arr2[0]); 
   int size3 = size1 + size2; 
   int arr3[size3]; 

   for (int i = 0; i < size1; i++) {
      arr3[i] = arr1[i];
   }

   for (int i = 0; i < size2; i++) {
      arr3[size1 + i] = arr2[i];
   }

   printf("Concatenated array: ");
   for (int i = 0; i < size3; i++) {
      printf("%d ", arr3[i]);
   }
   printf("\n");

   return 0;
}
