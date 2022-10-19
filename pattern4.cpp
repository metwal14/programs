#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    int count=1;
    while(i<=num){
        int j = 1;
        while(j<=num){
             cout<<count;
        j+=1;   
        count+=1;
        }
        cout<<endl;
        i+=1;

    }
  
}