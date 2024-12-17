#include <bits/stdc++.h>
using namespace std;

vector<int> findsmaller(vector<int> &arr)
{
int n= arr.size();

    vector<int> nse(n,-1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        nse[i] = st.empty() ? -1 : st.top();

        st.push(arr[i]);
    }

    return nse;
}

int main()
{
    vector<int> array = {5, 7, 9, 6, 7, 4, 5, 1, 3, 7};

    vector<int> result = findsmaller(array);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}