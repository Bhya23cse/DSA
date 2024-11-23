#include<iostream>
using namespace std;
int main(){
    int n=4;
    printf("\n\n\n");
    for (int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<"* "; 
        }
        for(int j=(n-1);j>i;j--){
            cout<<"  ";
            
        }    
        for(int j=(n-1);j>i;j--){
            cout<<"  ";
            
        }
        for(int j=0;j<=i;j++){
            cout<<"* "; 
        }
        cout<<endl;
    }
//bottom

    for (int i=n-1;i>=0;i--){
      for (int j=0;j<=i;j++){
        cout<<"* ";
        
        }

        for (int j=i;j<=n-2;j++){
        cout<<"  ";
        
        }
        for (int j=i;j<=n-2;j++){
        cout<<"  ";
        
        }
        for (int j=0;j<=i;j++){
        cout<<"* ";
        
        }
            cout<<endl;
          
    }
    
    return 0;
}