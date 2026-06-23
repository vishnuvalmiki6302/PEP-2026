#include<bits/stdc++.h>
using namespace std;


//Pass Bt Value , Passby Ref
// void doubleTheValue(int num){
//     num*=2;
//     cout<<"Values from the function: "<<num<<endl;
// }

// void doubleTheValue(int &num){   Pass by reference
//     num*=2;
//     cout<<"Values from the function: "<<num<<endl;
// }

// int main(){
//     int num=9;

//     doubleTheValue(num);
//     cout<<num;  This will also change when the value is passed by the reference
//     return 0;
// }


int main(){
    int a=10;
    int *ptr=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<*(ptr+1)<<endl;
    cout<<*ptr+1<<endl;
// 10
// 0x61ff08
// 0x61ff08
// 10

}