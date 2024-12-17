#include <bits/stdc++.h>
using namespace std;

int miss(vector<int>&a, int n)
{

    for (int i = 0; i <= n; i++)
    {

        int flag = 0;

        for (int j = 0; j < n - 1; j++){
        
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
    }
            if (flag == 0)
            {
                return i;
            }
        
    }

    return -1;
}

int main()
{

    int n = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = miss(a, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}