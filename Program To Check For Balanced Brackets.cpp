#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int len = s.size();
    stack<char> st;

    for (int i = 0; i < len; i++)     {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) 
                return false;

            char top = st.top();
            if ((s[i] == ')' && top == '(') ||
                (s[i] == ']' && top == '[') ||
                (s[i] == '}' && top == '{'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

  
    return st.empty();
}

int main()
{
    string s = "{([])}";

    if (isValid(s))
    {
        cout << "Valid string" << endl;
    }
    else
    {
        cout << "Invalid string" << endl;
    }

    return 0;
}
