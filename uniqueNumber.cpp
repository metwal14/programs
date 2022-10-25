#include<iostream>
using namespace std;

//m=4;
//m*2+1

//using XOR 3^3=0; 3^0=0; number^number = 0 ; number^0=0;
int findUnique(int arr[],int n){
    int uniqueNumber = 0;

    for(int i=0;i<n;i++){
        uniqueNumber^=arr[i];
    }
    return uniqueNumber;
}

int main(){
    int arr[9]={1,2,2,1,4,4,7,3,7};
    cout << "Unique number is "<<findUnique(arr,9);

}