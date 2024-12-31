#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int p=0;
    while (num>0)
    {
       int pl=num%10;
       num=num/10;

        p+=pl;
    }
    return p;
}
int main(){
    int a;
    cout<<"Enter a number to check the sum of digit"<<endl;
    cin>>a;
                                                                                                                                                                   

    cout<<sumOfDigit(a);
    return 0;
}

