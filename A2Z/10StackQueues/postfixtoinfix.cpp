#include <bits/stdc++.h>

using namespace std;

bool operand(char c)
{
    return isalnum(c); // Check if alphanumeric
}

string posttoinfix(string s)
{
int i=0;

    stack<string> st;
   while(i<s.length())

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

            string con = "( " + t2 + s[i] + t1 + ")";

            st.push(con);
        }
        i++;
    }

    return st.top();
}

int main()
{
    string postfix = "AB-DE+F*/";
    cout << "Infix expression: " << posttoinfix(postfix) << endl;
    return 0;
}
