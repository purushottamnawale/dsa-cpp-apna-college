#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// Time Complexity is O(L), where L is the length of expression.
// Prefix Expression Evaluation starts from the begining of expression.

int postfixEvaluation(string s)
{
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout << postfixEvaluation("46+2/5*7+") << endl;
    return 0;
}


/*
    Postfix Expression
    1. Operand Operand Operator
    2. Preferences are given by BODMAS Rules
    ((4*2)+3) => 42*3+
    (5-(6/3)) => 563/-

*/