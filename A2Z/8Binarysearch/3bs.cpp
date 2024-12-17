//  first and last occurence

#include <bits/stdc++.h>
using namespace std;

int firstoccurence(int arr[], int n, int x)
{

  int low = 0;

  int high = n - 1;

  int first = -1;

  while (low <= high)
  {

    int mid = (low + high) / 2;

    if (arr[mid] == x)
    {
      first = mid;

      high = mid - 1;
    }

    else if (arr[mid] < x)
    {

      low = mid + 1;
    }

    else
      high = mid - 1;
  }
}

int lastoccurence(int arr[], int n, int x)
{

  int low = 0;

  int high = n - 1;

  int last = -1;

  while (low <= high)
  {

    int mid = (low + high) / 2;

    if (arr[mid] == x)
    {
      last = mid;

      low = mid + 1;
    }

    else if (arr[mid] < x)
    {

      low = mid + 1;
    }

    else
      high = mid - 1;
  }
}

int main()
{

  int arr[] = {2, 8, 8, 8, 8, 8, 8, 13};
  int n = sizeof(arr) / sizeof(arr[0]);

  int x = 8;

  int m = firstoccurence(arr, n, x);
  int l = lastoccurence(arr, n, x);

  cout << m << endl;
  cout << l;
}
