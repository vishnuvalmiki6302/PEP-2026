#include<bits/stdc++.h>
using namespace std;

string revString(string s){
 
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}

string removeDuplicate(string s){
    unordered_map<char,bool>map;
    string ans=" ";
    for(auto ch:s){
        if(!map[ch]){
            ans+=ch;
            map[ch]=true;
        }
    }
    return ans;
}

int main(){
   string s;
   cin>>s;
   string rev=revString(s);
   cout<<rev<<endl;
  cout<<removeDuplicate(s);

    

    return 0;
}