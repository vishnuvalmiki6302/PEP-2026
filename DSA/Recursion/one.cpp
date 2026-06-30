#include<bits/stdc++.h>
using namespace std;

void rev(int n){
    if(n==11) return;
    
    rev(n+1);
}

int fact(int n){
    if(n==0) return 1;
    cout<<n<<" ";
    return n* fact(n-1);
    
}

int fibo(int n){
    
    if(n==0)return 0;
    if(n==1)return 1;
    return fibo(n-1)+ fibo(n-2);
}


// bool LineraSearch(int  arr[],int n,int k){
//     if(n==0)return false;

//     if(arr[0]==k)return true;
//     else{
//         return LineraSearch(arr+1,n-1,k);
//     }
// }

bool BinarySearch(int arr[],int left,int right,int k){

    if(left >right)return false;

    int mid=left+right/2;

    if(arr[mid]==k) return true;

    else if(arr[mid]>k){
        return BinarySearch(arr,left,mid-1,k);
    }else{
        return BinarySearch(arr,mid+1,right,k);
    }
}

int main(){
    int n=8;
    int arr[]={2,2,2,4,5,8,12,24};
    int target=24;
    // bool a=LineraSearch(arr,n,target);
    // cout<<a;

    int left=0;
    int right=n-1;
    bool b=BinarySearch(arr,left,right,target);
    cout<<b;
    return 0;

}