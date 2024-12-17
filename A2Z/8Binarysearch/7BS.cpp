

#include <bits/stdc++.h>
using namespace std;

int minsortedarray(int arr[], int n)

{
    int low = 0;

    int high = n - 1;

    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[mid])
        {

            if (arr[low] <= ans)
            {

                index = low;

                ans = arr[low];
            }

            low = mid + 1;

        }

            else
            {
                if (arr[low] <= ans)
                {

                    index = low;

                    ans = arr[mid];

                    high = mid - 1;
                }
            }
        }

        return index;
    }

int main()
{

    int arr[] = {4, 5, 6, 7, 8, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int m = minsortedarray(arr, n);

    cout << m;
}