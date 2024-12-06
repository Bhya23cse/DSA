#include<iostream>
using namespace std;


void reverseArray(int arr[],int size){
    int start=0,end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;end--;
    }
    
    
}

int main(){
    int arr[]={25,15,42,31,15,24};
    int s=6;
    reverseArray(arr,6);
    cout<<"reverse string is : ";
    for (int i=0; i<s; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;


}