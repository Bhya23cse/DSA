#include<iostream>
using namespace std;
int toBinary(int num){
    int ans=0,pow=1;
    while(num>0){
        int rem=num%2;
        num/=2;

        ans+=(rem*pow);
        pow*=10;

    }
    return ans;
}

int main(){
    int n=5;
    cout<<toBinary(n)<<" ";
    return 0;
}