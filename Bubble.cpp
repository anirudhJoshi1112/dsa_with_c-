#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    cout<<"enter the array element\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c1=0;
    int c2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            c1++;
            c2++;
        }
    }
    cout<<"if-else statement counter:"<<c1<<"\n";
    cout<<"swap statement counter:"<<c2<<"\n";
    cout<<"shorted array is:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
