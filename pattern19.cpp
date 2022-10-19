#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    while(i<=num){
        //1st
        int j = 1;
        while(j<=num-i+1){
            cout<<" "<<j<<" ";
            j+=1;
        }

        //2nd
        int start = 1;
        while(start<=(i-1)*2){
             cout<<" * ";
            start+=1;
        }
       
        //3rd
        int startS = num-i+1;
        while(startS){
            cout<<" "<<startS<<" ";
            startS-=1;
        }
        cout << endl;
        i+=1;

    }
}








//  1  2  3  4  5  5  4  3  2  1 
//  1  2  3  4  *  *  4  3  2  1 
//  1  2  3  *  *  *  *  3  2  1 
//  1  2  *  *  *  *  *  *  2  1 
//  1  *  *  *  *  *  *  *  *  1