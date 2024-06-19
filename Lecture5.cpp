// Conditional Statements, If Else,Switch Case
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    int c, d;

    cout << "Input 4 integer a,b,c, and d" << endl;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    // statement : a>b
    // for "And "condition

    // cout << (a > b && c>d);

    // for "or" condition
    cout << (a > b || c > d);

    // C++ interprets true as 1
    // C++ interprets false as 0
}