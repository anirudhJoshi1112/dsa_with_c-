#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n,int& comparisons,int&swaps){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            comparisons++;
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
            swaps++;
            swap(arr[min_idx],arr[i]);
        }
    }
}

int main()
{
   int n,comparisons=0,swaps=0;
   cout<<"enter the size of array";
   cin>>n;
   int arr[n];
   cout<<"enter the element to swap";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    selectionSort(arr,n,comparisons,swaps);

	cout<<"Sorted Array is :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Number of Comparisons: "<< comparisons <<endl;
    cout<<"Number of Swaps: "<< swaps <<endl;
    return 0;
}
