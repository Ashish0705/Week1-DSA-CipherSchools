// Binary Search 
#include<iostream>
using namespace std;


void simplesearch(int *arr, int l, int r, int val)
{
    int i;

    for(i=l;i<r+1;i++)
    {
        if(arr[i]==val)
        {
            cout<<"congrats your value is present in the array "<<endl;
            return;

        }
    }

    cout<<"Sad bro, your value is not present in the array "<<endl;
    return ;

};

int binarysearch(int *arr, int l, int r, int val)
{
    int middle;
    
    middle = l+(r-l)/2;
    if(r>=l)
    {
        if(arr[middle]==val)
    {
        return 1;
    }
    else if(arr[middle]>val)
    {
        return binarysearch(arr,l,middle-1,val);

    }
    else 
    {
       return  binarysearch(arr,middle+1,r,val);

    }

    }
return -1;

   
}

int main()
{
    int arr[7]={1,2,3,4,5,7,10};
    int size = 7;

    simplesearch(arr,0,6,13);
simplesearch(arr,0,6,10);

if(binarysearch(arr,0,6,10)==-1) cout<<"your value is present in the array ";
    return 0;
}