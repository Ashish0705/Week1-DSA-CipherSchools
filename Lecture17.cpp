// Function pt-4
#include <iostream>
using namespace std;

void PrintHi() // No paremeter are required 
{
    cout<<"Hi"<<endl;
    return ;

}

int sum(int a, int b)
{
    int c;

    c=a+b; //a+b will result in 10 therefore , the value of c over here is 10 
a=500;

cout<<"The value of c is "<<c<<endl; 


    return c;

}

int main()
{
    PrintHi();  // First calling the PrintHi function 

int a,b;
int c;


 a=4;
 b=6;


c=75; // The value of c over here in the main function is 75 

int d;

d=sum(a,b);

//cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;  //The value of a should turn out to be 500
cout<<"The value of c is "<<c;  // It is gives a garbage value till we cannot assign a value to c 

    return 0;
}