#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>result;

    result.push_back(10);

    result.push_back(20);

    result.push_back(30);

    for(int i: result){
        cout<<i<<endl;
    }

    result.pop_back();
    for(int i: result){
        cout<<i<<endl;
    }
    cout<<result.size()<<endl;
    result.clear();
    cout<<result.size()<<endl;
}