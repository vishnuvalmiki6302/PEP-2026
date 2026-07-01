#include<bits/stdc++.h>
using namespace std;


void tra(int arr[3][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void isPresent(int arr[3][4],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                cout<<"Element is present at "<<i<<","<<j<<endl;
                return;
            }
        }
    }
    cout<<"Element is not present"<<endl;
    
}

void rowSum(int arr[3][4]){
     int maxi=INT_MIN;
    int rowIndex=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
       if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
       
       
    }
   
    cout<<maxi<<" "<<rowIndex<<endl;

    
}
void Rotate(int arr[3][4]){
    for(int i=0;i<4;i++){
        if(i%2!=0){
            for(int j=0;j<3;j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    
    }
}
void spiral(int arr[3][4]) {
    int topRow = 0;
    int bottomRow = 2;
    int leftCol = 0;
    int rightCol = 3;

    while(topRow <= bottomRow && leftCol <= rightCol) {

        // Top row
        for(int i = leftCol; i <= rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Right column
        for(int i = topRow; i <= bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Bottom row
        if(topRow <= bottomRow) {
            for(int i = rightCol; i >= leftCol; i--) {
                cout << arr[bottomRow][i] << " ";
            }
            bottomRow--;
        }

        // Left column
        if(leftCol <= rightCol) {
            for(int i = bottomRow; i >= topRow; i--) {
                cout << arr[i][leftCol] << " ";
            }
            leftCol++;
        }
    }
}


int main(){

    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        
    }


    // tra(arr);
    // int target;
    // cin >> target;

    // isPresent(arr,target);
    // if(isPresent(arr,target)){
            
    //     cout<<"Element is present"<<endl;
    // }else{
    //     cout<<"Element is not present"<<endl;
    // }
    // rowSum(arr);
    // Rotate(arr);
    spiral(arr);

    return 0;
}