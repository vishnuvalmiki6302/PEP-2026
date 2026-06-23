// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// //       Data Types
// // int         -> 4 bytes
// // long long   -> 8 bytes
// // float       -> 4 bytes
// // double      -> 8 bytes
// // char        -> 1 byte
// // bool        -> 1 byte

//     // int age=18;
//     // int noofst=12;
//     // if(age>=18 && noofst >=10){
//     //     cout<<"Test will be conducted";
//     // }else{
//     //     cout<<"NOT Possible";
//     // }

//     // char grade='A';

//     // switch(grade){
//     //     case 'A':
//     //     cout<<" Excelle"<<endl;
//     //     break;
//     //     case 'B':
//     //     cout<<"Beteu"<<endl;
//     //     break;
//     //     default:
//     //     cout<<"Invalid";
//     // }

//     // int x=10;
//     // int y=20;
//     // int z=(x>y)?x:y;
//     // cout<<z;

//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // for(int s=i;s<n;s++){
        //     cout<<" ";
        // }

        for (int j = 1; j <= n-i+1; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}