#include <bits/stdc++.h>
using namespace std;

vector<int> findngecycle(int arr[], int n)
{

    vector<int> nge(n,-1);

    stack<int> st;

    for (int i = (2 * n) - 1; i >=0; i--)
    {

        while (!st.empty() && st.top() <= arr[i % n])
        {

            st.pop();
        }

        if (i < n)
        {
            nge[i] = st.empty() ? -1 : st.top();
        }

        st.push(arr[i % n]);
    }

    return nge;
}






    int main()
    {
        int array[6] = {2,10,12,1,11,2};
        int n = 6;

        vector<int> result = findngecycle(array, n);

        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;

        return 0;
    }