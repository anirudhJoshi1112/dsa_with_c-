#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n,int& comparisons,int&shift){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            shift++;
            comparisons++;
        }
        arr[j+1]=key;
        shift++;
    }
}

int main()
{
   int n,comparisons=0,shift=0;
   cout<<"enter the size of array";
   cin>>n;
   int arr[n];
   cout<<"enter the element to swap";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    insertionSort(arr,n,comparisons,shift);

	cout<<"Sorted Array is :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Number of Comparisons: "<< comparisons <<endl;
    cout<<"Number of Shift: "<< shift <<endl;
    return 0;
}
