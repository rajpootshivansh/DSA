#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
   for (int i = n - 1; i >= 0; i--)
   {

      for (int j = 0; j <= i-1 ; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
         }
      }
      
   }
  
}

int main()
{
   int n;
   // cin >> n;
   // int arr[n];
   // for (int i = 0; i < n; i++)
   // {
   //    cin >> arr[i];
   // }
n=5;

   int arr[n]={ 12,25,45,36,11};

   bubblesort(arr, n);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}