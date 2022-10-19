#include <iostream>
using namespace std;

int main(){
    // int num;
    // cin>>num;
    // for(int i = 2;i<num;i++){
    //     if(num%i==0){
    //         cout<<"Its not prime";
    //         return 0;
    //     } 
    // }
    // cout << " Its prime";

    // for(int i =0;i<=15;i+=2){
    //     cout << i << " ";
        
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    for(int i =0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<< " "<<j<<endl;
        }
    }
}
// 0 