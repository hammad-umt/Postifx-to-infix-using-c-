#include <iostream>
#include <stack>
#include <string>
using namespace std;
string ptoi(string p)
{
    stack<string> in;
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] <= '9' && p[i] >= '0')
        {
            in.push(string(1, p[i]));
        }
        else
        {
            string s1 = in.top();
            in.pop();
            string s2 = in.top();
            in.pop();
            in.push('(' + s2 + p[i] + s1 + ')');
        }
    }
    return in.top();
}
int main()
{
    string p = "23+5*";
    string in = ptoi(p);
    cout << p << endl;
    cout << in << endl;
}