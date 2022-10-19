#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;

    while(i<=num){
        //for space
        int space = 0;
        while(space<i-1){
            cout<<" ";
            space+=1;
        }
        //for num
        int j = 1;
        while(j<=num-i+1){
            cout<<j+i-1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}