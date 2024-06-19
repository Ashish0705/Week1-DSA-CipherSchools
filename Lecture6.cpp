// Conditional Statements, If Else,Switch Case Pt 2

#include <iostream>
using namespace std;

int main()
{

    // float a, b;

    // cout << "Give 2 floating point number as input";

    // cin >> a >> b;

    // if (a > 0.01 && b > a) // 1 and 0 // The first statement is true and second statement is false : a=2 and b=1.9
    // {
    //     cout << "The condition in if statement is correct";
    // }
    // else
    // {
    //     cout << "The condition is false";
    // }

    // int marks;

    // cout << "Student, please enter the marks to calculate the grade : ";
    // cin >> marks;

    // if (marks > 90)
    // {
    //     cout << "A";
    // }
    //  else if ( marks > 80)
    // {
    //     cout << "B";
    // }
    // else if (marks > 70)
    // {
    //     cout << "C";
    // }
    // else
    // {
    //     cout << "Pass";
    // }

    // int a,b,c,d;

    // cout<<"Give 4 integers as input : a,b,c and d "<<endl;
    // cin>>a>>b>>c>>d;

    // if(a>b && c>d)
    // {
    //     cout<<"haha";
    // }
    // else if(a>b && c<d)
    // {
    //     cout<<"hehe";

    // }
    // else if(a<b && c>d)
    // {
    //     cout<<"huhu";
    // }
int a;
cout<<"enter a integer a";
cin >>a;

switch (a) 
{
case 1:
cout<<"The value of a is 1";
    break;
    case 2:
    cout<<"The value of a is 2";


default:
cout<<"default will be always printed";
    break;
}

return 0;

}