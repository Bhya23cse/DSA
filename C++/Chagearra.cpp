#include<iostream>
using namespace std;
void changearr(int arr[],int n){
    cout<<"in function"<<endl;
    for (int i = 0; i < n; i++)
    {
        arr[i]=2*arr[i];
    }
    
    
}
int main(){
    cout<<"main"<<endl;
    int arr[]={1,2,3};
    changearr(arr,3);
    for (int i = 0; i < 3; i++)
    {
       cout<<arr[i]<<" ";
    }
    



    return 0;
}