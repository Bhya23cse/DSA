#include<iostream>
#include<vector>
using namespace std;
int Linearsearch(vector<int>&num,int target){
    for(int i=0;i<num.size();i++){
        if(num[i]==target){
            return i;
        }
    }

    return -1;
}

void revVector(vector<int>nums){
    int rev=0;
    cout<<"reverse vector is: "<<endl;
    for (int i=nums.size()-1; i >=0; i--)
    {
        rev=nums[i];
        cout<<rev<<", ";
    }
    
    
}
int main(){
    vector<int>number={5,3,6,3,2,4,2,4,3};
    int target;
    cout<<"Enter the target number to search: ";
    cin>>target;
    int result=Linearsearch(number,target);
    if(result!=-1){
        cout<<"the target is found at index: "<<result<<endl;
    }
    else{
        cout<<"The target is not found "<<endl;
    }

    cout<<endl<<endl;
    revVector(number);
    
    
    
    
    

    return 0;
}