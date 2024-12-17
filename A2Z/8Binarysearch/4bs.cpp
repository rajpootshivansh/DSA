
#include <bits/stdc++.h>
using namespace std;

int rotatedbinarysearch(int arr[], int n, int k)
{

    int low = 0;

    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[low] <= arr[mid])
        {

            // check if it is sorted

            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }

        else
        {

            if (k <= arr[high] && arr[mid] <= k)
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }
    }

    return false;
}

int main()
{

    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 5;

    int m = rotatedbinarysearch(arr, n, k);

    cout << m;
}