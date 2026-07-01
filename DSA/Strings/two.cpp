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

int main(){
   string s;
   cin>>s;
   string rev=revString(s);
   cout<<rev<<endl;
  

    

    return 0;
}