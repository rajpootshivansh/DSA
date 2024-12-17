#include <bits/stdc++.h>
#include <stack>

using namespace std;

int priority(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}
string infixtopostfix(string s)
{

    int i = 0;
    stack<char> st;
   string  ans="";

    while (i < s.length())
    {

        if (s[i] >= 'A' && s[i] <= 'z' ||
            s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= '0' && s[i] <= '9')

        {
            ans = ans + s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {

            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
        }

        else
        {

            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {

                ans += st.top();
                st.pop();
            }

            st.push(s[i]);
        }

        i++;
    }

    return ans ;

}

int main()
{
    string infix = "A+B*(C^D-E)";
    cout << "Postfix: " << infixtopostfix(infix) << endl;
    return 0;
}