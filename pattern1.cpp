#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    i=1;

    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
