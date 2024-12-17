#include <bits/stdc++.h>
using namespace std;

int root(int n)

{

    int low = 1;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        int ans = 1;

        if (mid * mid > n)
        {

            high = mid - 1;
        }

        else
        {

            ans = mid;
            low = mid + 1;
        }
    }

    return high;
}

int main()
{
    int n = 45;

    int lol = root(n);

    cout << lol;
}