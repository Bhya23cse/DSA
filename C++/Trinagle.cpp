#include<iostream>
using namespace std;
int main(){
    int n=4;
    //cout<<"Enter the value of n number";
    //cin>>n;
    for (int i = 0; i < n; i++)
    {
       for(int j=n-i;j>0;j--){
        cout<<"  ";

       }
       for (int j = 0; j <= i; j++){
            cout<<"* ";
       }

       for (int j = 1; j <= i; j++){
            cout<<"* ";
       }
       cout<<endl;
    }
    
    return 0;
}