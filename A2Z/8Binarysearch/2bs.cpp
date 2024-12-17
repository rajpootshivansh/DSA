#include <bits/stdc++.h>
using namespace std;

int lowerbound(int arr[], int n, int x)
{

  int low = 0;
  int high = n - 1;
  int ans = n;

  while (low <= high)
  {

    int mid = (low + high) / 2;

    if (arr[mid] >= x)//  same in upper bound only equal sign hata do 
    {

      ans = mid;

      high = mid - 1;
    }

    else
      low = mid + 1;
  }
 
  return ans;
}

int main()
{

  int arr[] = {5, 6, 8, 9, 12, 36, 65, 85, 89, 97, 100, 122, 588};
  int n = sizeof(arr) / sizeof(arr[0]);

  int x = 101;

  int ans = lowerbound(arr, n, x);

  cout << ans;
}
