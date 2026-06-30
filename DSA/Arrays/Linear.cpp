#include<bits/stdc++.h>
using namespace std;

 int linearsearch(vector <int>arr,int k){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            ans=arr[i];
        }
    }
    return ans;
 };

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=linearsearch(arr,6);
    cout<<ans;

}