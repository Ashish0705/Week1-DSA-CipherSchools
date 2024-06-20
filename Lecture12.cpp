// Do While And Infinite Loops
#include <iostream>
using namespace std;

int main()
{
//     int password;
// int count =0;


//     while (1)
//     {
//         cout<<"Chocolates";
//         count++;

//         if(count>100) break;

//     }

    // do
    // {
    //     cin >> password;

    // } while (password < 999999);

    // cout<<"Enter the password: "<<endl;
    // cin>>password;

    // while(password<999999)
    // {
    //     cout<<" The password does not meet the required condition , please enter the password again"<<endl;
    //     cin>>password;

    // }
    // cout<<" the user has now entered a correct password"<<endl;

int i;

for(i=0;   ;i++)
{
    cout<<i<<" ";
    if(i>100) break; //this statement gets executed when i is 101 
}
    return 0;
}