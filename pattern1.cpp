#include<iostream>

using namespace std;

int main(){
    int i=1;
    int num;
    cin>>num;
    while(i<=num){
        int j =1;
        while(j<=num){
            cout<<" * ";
            j+=1;
        }
        cout<<endl;
        i+=1;
        
    }
}