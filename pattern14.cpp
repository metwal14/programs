#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    while(i<=num){
        //for space
        int space=i-1;
        int temp = 0;
        while(temp<space){
            cout<<" ";
            temp+=1;
        }
        int j = 1;
        while(j<=num-i+1){
            cout<<i;
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
   

}