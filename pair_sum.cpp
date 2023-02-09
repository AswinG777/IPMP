#include<bits/stdc++.h>

using namespace std;

void sum_pair(int arr[], int x, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i]+arr[j]==x){
                cout << "Yes, " << arr[i] << " + " << arr[j] << " gives " << x << endl; 
                break;
            }
        }
    }
    

}

int main(){
    int a1[]={1,3,9,4};
    int size = sizeof(a1)/sizeof(a1[0]);
    int sum = 13;
    sum_pair(a1,sum,size);
}