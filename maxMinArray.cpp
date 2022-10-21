#include<iostream>
using namespace std;


int main(){
    int temp[5] = {6,30,4,32,44};
    int n = 5;
    int max = INT_MIN,min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(temp[i]>max){
            max = temp[i];
        } else if(temp[i]<min){
            min = temp[i];
        }
    }
    cout<<"min is "<<min<<"max is"<<max;

   
}