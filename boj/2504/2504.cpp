#include <algorithm>
#include <vector>
#include <deque>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> st;
    string str;

    getline(cin, str);
    int temp = 1;
    int ans = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(')
        {
            temp *= 2;
            st.push(c);
            continue;
        }
        else if (c == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                ans = 0;
                break;
            }
            if (str[i - 1] == '(')
            {
                ans += temp;
                temp /= 2;
                st.pop();
                continue;
            }
            else
            {
                st.pop();
                temp /= 2;
                continue;
            }
        }
        else if (c == '[')
        {
            temp *= 3;
            st.push(c);
            continue;
        }
        else if (c == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                ans = 0;
                break;
            }
            if (str[i - 1] == '[')
            {
                ans += temp;
                temp /= 3;
                st.pop();
                continue;
            }
            else
            {
                st.pop();
                temp /= 3;
                continue;
            }
        }
    }

    if (!st.empty())
    {
        ans = 0;
    }
    printf("%d", ans);
}