// Function pt-4
#include <iostream>
using namespace std;

int sum(int , int );// i have decalared that a function called sum exists but the body is not formed yet.
// {
//     int c;

//    c = a + b;

//     a=10;
//     b=11;
 
 

//     return c;
// }

int main()
{
    int a, b;

    a = 3;
    b = 5;

    int c;
cout<<a<<" "<<b<<endl; // these value are before I call the function "sum"

    c = sum(a, b);
// int sum(int a, int b)//int a--->3,int b---->5
    cout << c<<endl;

cout<<a<<" "<<b<<endl; // these value of a ,b are after I call the function 
  
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}