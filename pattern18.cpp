#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    while(i<=num){
        //for space
        int space = num-i;
        while(space){
            cout<< " ";
            space-=1;
        }
        //for 1st triangle
        int j = 1;
        while(j<=i){
            cout<<j;
            j+=1;
        }
//for 2nd triangle
        int start = i-1;
        while(start){
            cout<<start;
            start-=1;
        }        
        cout<<endl;
        i+=1;
    }
}