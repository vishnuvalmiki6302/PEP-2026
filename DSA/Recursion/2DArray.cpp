#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        
    }
    for(int i=1;i<3;i+=2){
        for(int j=0;j<4;j+=2){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}