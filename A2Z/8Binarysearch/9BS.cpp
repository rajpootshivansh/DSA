#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int n)
{

    if (n == 1)
        return 0;

    if (arr[0] > arr[1])
    {

        return arr[0];
    }

    if (arr[n - 1] > arr[n - 2])
    {

        return arr[n - 1];
    }

    int low = 1;
    int high = n - 2;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])

            return arr[mid];

       else  if (arr[mid] > arr[mid - 1])
        {
            low = mid + 1;
        }

       else 
        {

            high = mid - 1;
        }
    }
    return -1;

}



int main(){


       //               0,1,2,3,4,5,6,7,8
    int arr[] = {1,2,3,4,5,6,3,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = peak(arr, n);

    cout << k;
}