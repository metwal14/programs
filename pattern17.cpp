#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i = 1;
    int temp=1;
    while(i<=num){
        //for space
        int space = num-i+1;
        while(space){
            cout<< " ";
            space-=1;
        }
        //for star
        int j = 1;
        
        while(j<=i){
            cout<<temp;
            j+=1;
            temp+=1;
        }
        cout<<endl;
        i+=1;

    }
}