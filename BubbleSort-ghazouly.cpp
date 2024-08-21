#include <iostream>
using namespace std;

void B_Sort(int arr[],int n)
{
   bool swapped;
   for (int i = 0 ; i < n-1 ; i++)
     {
       swapped = false;
       for (int j = 0 ; j < n-i-1 ; j++)
       {
        if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = true;
       }
     }
   if(!swapped) break;
  }
}

void print_arr(int arr[] , int n)
{
   for (int i = 0 ; i<n ; i++)
   printf("%d" , arr[i]);
}

int main(void)
{
  int n = 6;
  int arr[n] = {12,5,48,4,1,5};
  B_Sort(arr , n);
  print_arr(arr , n);

 return 0 ;
}
