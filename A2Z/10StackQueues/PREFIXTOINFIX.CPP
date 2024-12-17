#include <bits/stdc++.h>

using namespace std;

bool operand(char c)
{
    return isalnum(c); // Check if alphanumeric
}

string prefixtoinfix(string s)
{
    int i = s.length()-1;

    stack<string> st;
    while (i >=0)

    {

        if (operand(s[i]))
        {

            st.push(string(1, s[i]));
        }

        else
        {

            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string con = "( " + t1 + s[i] + t2 + ")";

            st.push(con);
        }
        i--;
    }

    return st.top();
}

int main()
{
    string prefix = "*+PQ-MN";
    cout << "Infix expression: " << prefixtoinfix(prefix) << endl;
    return 0;
}
