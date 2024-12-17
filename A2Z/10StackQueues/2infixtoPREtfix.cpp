#include <bits/stdc++.h>
#include <stack>

using namespace std;

bool operand(char c)
{
    return isalnum(c); // Check if alphanumeric
}

string reverse(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

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

string infixtoprefix(string s)
{

    s = reverse(s);

    int i = 0;

    stack<char> st;

    string ans = "";

    while (i < s.length())
    {

        if (operand(s[i]))
        {

            ans += s[i];
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
            if (!st.empty())
                st.pop();
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

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

   return reverse(ans);

}

int main()
{
    string infix = "(A+B)*C-D+F";
    cout << "Prefix: " << infixtoprefix(infix) << endl;
    return 0;
}