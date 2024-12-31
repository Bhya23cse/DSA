#include<iostream>
#include<climits> 
using namespace std;
int main(){
    int num[]={95,20,45,-2,28,7};
    int size=6;
    int smallest= INT_MAX;
    int largest= INT_MIN;
    cout<<"my::"<<largest;
    int indexl,indexs;
    for (int i = 0; i < size; i++)
    {
        if(num[i]<smallest){
            smallest=num[i];
            indexs=i;
        }

        if(num[i]>largest){
            largest=num[i];
            indexl=i;
        }

        
    }
    cout<<endl;
    cout<<"smallest number at index "<<indexs<<" is "<<smallest<<endl;
    cout<<"largest number at index "<<indexl<<" is "<<largest<<endl;
    cout<<endl;


    return 0;
}