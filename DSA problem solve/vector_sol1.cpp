#include<iostream>
using namespace std;

int main()
{
    int n = 4;

    for(int i=0; i<n; i++)
    {

        // space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }

        // ABC
        for(int j=0; j<=i; j++)
        {
            char ch = 'A' + j;
            cout<<ch;
        }

        // CBA
        for(int j=i-1; j>=0; j--)
        {
            char ch = 'A' + j;
            cout<<ch;
        }

        cout<<endl;
    }

    return 0;
}