#include<iostream>
using namespace std;

//using for loop
void swapping(int arr[],int n){
    for(int i = 0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);

        }
    }
}
//using while
void swappingAlternate(int arr[],int n){
     int i = 0;
    int counter=1;
    while(counter<=n/2){
        cout<<i<<"i"<<endl;
        //without using swap function
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        // swap(arr[i],arr[i+1]); //inbult swap function
        i+=2;
        counter++;

    }
}

void printArray(int arr[],int n){
for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    printArray(arr,9);
    cout<<endl;
    // swappingAlternate(arr,9);
    swapping(arr,9);
    printArray(arr,9);

    
    

}