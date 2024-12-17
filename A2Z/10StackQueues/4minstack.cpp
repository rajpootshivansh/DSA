#include <bits/stdc++.h>

using namespace std;

int minele(int val)
{

    stack<int> st;

    int min = INT_MAX;

   push(val)
    {

        if (st.empty())
        {
            min = val;
            st.push(val);
        }

        else
        {
            if (val > min)
            {
                st.push(val);
            }

            else
            {
                st.push(2 * val - min);
                min = val;
            }
        }
    }
}
