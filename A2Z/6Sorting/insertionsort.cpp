#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j]= temp;

            j--;
        }
    }
}

int main()
{
    int n;
   n=5;

   int arr[n]={ 12,25,45,36,11};
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}