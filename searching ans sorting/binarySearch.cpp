#include<iostream>
using namespace std ;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    while (start<=end){
    int mid = (start + end)/2;

        if(arr[mid]==key){
            return mid;
        }

        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    
    return -1;
}


int main (){
    int arr[6]={15,37,45,55,67,89};

    int index = binarySearch(arr,6,67);
    cout<<"index of 67 is "<<index<<endl;
}