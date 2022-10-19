#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    while(i<=num){
        int j = 1;
        int count=i;
        while(j<=i){
            cout<<i+j-1;
            j+=1;
            count+=1;   
            
        }
        cout<<endl;
        i+=1;
    }
}
// 1
// 23
// 345
// 4567