#include<iostream>
using namespace std;

int main(){
    int i =1;
    int num;
    cin>>num;

    while(i<=num){
        int j = 1;
        while(j<=i){
            cout<<i-j+1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}