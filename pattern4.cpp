#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=1;
    cin>>n;
    i=1;

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i;
           
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
