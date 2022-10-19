#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    while(i<=num){
        //for space
        int space=num-i; 
        while(space){
            cout<<" ";
            space-=1;
        }
        int j = 1;
        while(j<=i){
            cout<<i;
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
   

}