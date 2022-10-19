#include <iostream>

using namespace std;

int main(){

    int num;
    cin>>num;
    int i = 1;

    while(i<=num){
        //for star print
        int j = 1;
        while(j<=num-i+1){
            cout<< "*";
            j+=1;
        }
        
        cout<<endl;
        i+=1;

    }


}