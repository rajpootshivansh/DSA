#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    int arr[n] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    int lenth = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int sum = 0;

            for (int k = i; k < j; k++)
            {
                sum += arr[k];
                if (sum == k)
                {
                    lenth = max(lenth, j - i + 1);
                }
            }
        }
    }

    cout << lenth;
}
