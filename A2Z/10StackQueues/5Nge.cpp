#include <bits/stdc++.h>
using namespace std;

vector<int> findnge(int arr[], int n)
{

   vector<int>nge(n,-1);

    stack<int> st;

    for (int i = n-1; i >= 0 ; i--)
    {

        while (!st.empty() && st.top() <= arr[i])
        {

            st.pop();
        }
            if (!st.empty())
            {
                nge[i] = st.top();
            }

           
                st.push(arr[i]);

        }


    return nge;
    }





    int main()
    {
        int array[12] = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
        int n = 12;

        vector<int> result = findnge(array, n);

        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;

        return 0;
    }

