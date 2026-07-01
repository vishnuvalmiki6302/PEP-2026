// #include<bits/stdc++.h>
// using namespace std;
// int string_check(string s){
// unordered_map<char,int>mp;
// for(int i=0;i<s.length();i++){
//     mp[s[i]]++;
// }
// for(int i=0;i<s.length();i++){
//     cout<<s[i]<<" "<<mp[s[i]]<<endl;
//     }
// }

// int main(){
//     string s;
//     cin>>s;
//     int ans=string_check(s);

//     cout<<ans;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<int,int>mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
    
        
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        cout<<mp[a]<<endl;
    }
    return 0;
}