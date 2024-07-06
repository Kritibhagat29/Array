#include<iostream>
using namespace std;
 void updateArray(int arr[], int n)
 {
    arr[1]=120;
    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
 }

 int main()
 {
    int arr[3]={1,2,3};
    updateArray(arr,3);

    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";//auto updated because the value at that address changes

    }

 }
