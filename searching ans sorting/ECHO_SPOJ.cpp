#include<bits/stdc++.h>
using namespace std;


bool isPossibleSolution(int arr[] , int n ,int m ,int mid){
        int woodSum = 0;

        for (int  i = 0; i < n; i++)
        {
            if(arr[i]> mid){
                int temp;
                temp = arr[i]-mid;
                woodSum +=temp;
                if (woodSum >= m)
                {
                    return true;
                }
                
            }
        }
        return false;
        
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int s=0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    int e= maxi;
    int mid = s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(isPossibleSolution(arr,n,m,mid)){
                ans=mid;
                s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    cout << ans << endl;
    return 0;
    
}