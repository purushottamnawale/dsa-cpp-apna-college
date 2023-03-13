#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

// Time Complexity is O(L), where L is the length of expression.
// Prefix Expression Evaluation starts from the end of expression.

int prefixEvaluation(string s){
    stack<int> st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();


            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}


int main()
{
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}

/*
    Prefix Expression
    1. Operator Operand Operand
    2. Preferences are given by BODMAS Rules
    ((4*2)+3) <=> +*423
    (5-(6/3)) <=> -5/63

    ((7+(4*5))-(2+0))<=> -+7*45+20 = 25
    -(+7*45)(+20)

*/