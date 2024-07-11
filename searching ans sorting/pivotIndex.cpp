#include<bits/stdc++.h>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int s,int e,int k){
        int mid=s+(e-s)/2;

        while (s<=e)
        {
            if(k < arr[mid]){
                e= mid-1;
            }
            else if (k > arr[mid]){
                s= mid+1;
            }
            else{
                return mid;
            }
            mid=s+(e-s)/2;
        }
    return -1;
        
}


int pivotIndex(vector<int>& arr,int n) {
        int s=0;
        int e=n-1;
        int mid= s+(e-s)/2;

        while (s<e)
        {
            if(arr[0]<=arr[mid]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return e;
        
    }


int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

     int pivoteIndex = pivotIndex(arr,n);
    cout<<"PIVOTE INDEX IS : "<<pivoteIndex<<endl;
    if(pivoteIndex!= n-1){if(arr[pivoteIndex] <= k && k <= arr[n-1]){
        return binarySearch(arr,pivoteIndex,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivoteIndex-1,k);
    }}
    else{
        return binarySearch(arr, 0, n-1, k);
    }
}



int main(){
   
    vector<int> arr = {5 ,8, 9, 10, 1, 3, 4};
   
   cout<<"INDEX OF K IS : "<< search(arr,7,4);
    
}