// Functions pt-6
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

//void swap(int a, int b)
void swap(int &a, int &b)

// By including the keyword & after the name of datatype and before variable name we are able to change the actual paremeter 
{
    int c;

    c=a;
    a=b;
    b=c;


    cout<<"The value of a and b after swapping inside the function are : "<<a<<" "<<b<<endl;

    return;
}


void  fun(int &a, int b)
{
    a=99999;
    b=99999;

cout<<"The value of a and b inside fun  function are : "<<a<<" "<<b<<endl;
    
}
int main()
{
    PrintHi();  // First calling the PrintHi function 

int a,b;
int c;


 a=4;
 b=6;

cout<<"The value of a and b before passing into the fun function are : "<<a<<" "<<b<<endl;

// c=75; // The value of c over here in the main function is 75 

// int d;

// d=sum(a,b);

//cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;  //The value of a should turn out to be 500
//cout<<"The value of c is "<<c;  // It is gives a garbage value till we cannot assign a value to c 

fun(a,b);


cout<<"The value of a and b after passing into fun  function are : "<<a<<" "<<b<<endl;


    return 0;
}