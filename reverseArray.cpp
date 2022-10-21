#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    for(int i = 0 ;i<(size-1)/2;i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}
void reverse(int arr[],int size){
    int start=0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

int main(){
    int arr[6] = {10,20,30,40,50,60};
    cout<<"Before reverse"<<endl;
printArray(arr,6);
    reverse(arr,6);
    cout<<endl;
    cout<<"after reverse"<<endl;
printArray(arr,6);   


}