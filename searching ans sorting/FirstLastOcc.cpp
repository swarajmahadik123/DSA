#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int k){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;

    while (s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
    
}

int lastOcc(int arr[],int n,int k){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;

    while (s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
    
}


int main(){
    int arr[6]={5,5,6,6,6,9};
    cout<< firstOcc(arr,7,6) <<endl;
    cout<< lastOcc(arr,7,6) <<endl;
}