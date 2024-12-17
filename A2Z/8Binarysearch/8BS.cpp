#include <bits/stdc++.h>
using namespace std;
int single(int arr[], int n)
{

    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0)
    //     {
    //         if (arr[i] != arr[i + 1])
    //             return arr[i];
    //     }

    //     else if (i == n - 1)
    //     {

    //         if (arr[i] != arr[i - 1])
    //             return arr[i];
    //     }

    //     else
    //     {

    //         if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
    //             return arr[i];
    //     }
    // }

    if (n == 1)
        return n;

    if (arr[0] != arr[1])
        return arr[0];

    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    int low = 0;

    int high = n - 2;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return arr[mid];

        /// this is left half and element in rigth  half
        if ((mid % 2 == 1 && arr[mid - 1] == arr[mid]) || 
        
       (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {

            low = mid + 1;
        }

        else

            high = mid - 1;
    }
}

int main()
{
    //               0,1,2,3,4,5,6,7,8
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = single(arr, n);

    cout << k;
} 