#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
        int t = a;
        a=b;
        b=t;
    }
void sort012(int a[], int n){
        
        int j=0;
        int k=0;;
        for (int j = 0; j < n; j++)
        {
            /* code */
            for(int i=1;i<n-1;i++){
            if(a[i]==0){
                swap(a[i],a[i-1]);
                j++;
            }
            else if(a[i]==2){
                swap(a[i],a[i+1]);
                k++;
            }
        }
        }
        
        
}

int main(){
    int a [5]={0, 2, 1, 2, 0};
    sort012(a,5);
    int p=5;
    int q=7;
    cout<<"P : "<<p<<endl;
    swap(p,q);
    cout<<"P : "<<p<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    
}