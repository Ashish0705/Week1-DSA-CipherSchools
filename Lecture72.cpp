// Hash Tables PT-2
#include <iostream>
using namespace std;

int main()
{
    string text;
    text = "hi guys how are you doing today , did you get time to watch the new spiderverse film and i want to ffind the letter with mixmum freq in this sentence  ";

    // this is how you transverse a string
    // cout<<text[0]<<endl;
    //  cout<<text[1]<<endl;
    //   cout<<text[2]<<endl;
    //    cout<<text[3]<<endl;

    // To store all the frequency I will first define an array of size 26

    int freq[26];
    int i;

for(i=0;i<26;i++) freq[i]=0;

    for (i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            freq[text[i]-'a']++;

        }
    }

    char temp;
    int max;

    for(i=0,temp='a',max=0;i<26;i++)
    {
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i]<<endl;;
        temp++;

        if(freq[i]>max) max=freq[i];

    }

    cout<<endl<<endl<<"The letter with maximum frequency is "<<max;
    
    return 0;
}