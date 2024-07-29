#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter length of password.\n";
    cin>>n;
    int x;
    
    for (int i=0;i<n;i++)
    {
        x=rand()%256;
        char y= x;
        cout<<y;
    }
    return 0;


}