#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i]==key) return 1;
    }
    return 0;

}

int main(){
    int arr[10] = {1,4,6,3,10,48,23,55,24,11};
    cout<<"Enter the key element "<<endl;
    int key;
    cin>>key;
    int isFound = linearSearch(arr,10,key);
    if(isFound) cout<<"Key is Present"<<endl;
    else cout<<"Key is absent"<<endl;
}