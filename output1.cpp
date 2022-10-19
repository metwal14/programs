#include<iostream>
using namespace std;

int main(){
    // int a,b=1;
    // a=10;
    // if(++a){
    //     cout<<b;
    // } else{
    //     cout<< b++;
    // }

    // int a=1,b=2;

    // if(a-- > 0 || ++b >2){
    //     cout<< "Stage1 - Inside If ";
    // } else{
    //     cout<< " Stage2 - Inside else";
    // }
    // cout<< a << " " << b << endl;

    // int number = 3;
    // cout<< (25*(++number));

    int a = 1;
    int b = a++; // b =1 and a = 2
    int c = ++a; // c=3 and a = 3
    cout<<b;
    cout<<c;


}

//output
// 1
//output
//Stage1 - Inside If and a=0,b = 3