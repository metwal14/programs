#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int i = 1;
    while(i<=num){
        int j = 1;
        char start = 'A'+i-1;
        while(j<=num){
            cout<<start;
            j+=1;
            start+=1;
        }
        cout<<endl;
        i+=1;
    }
}