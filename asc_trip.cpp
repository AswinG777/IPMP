#include<bits/stdc++.h>

using namespace std;

void asc_trip(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]<arr[j] && arr[j]<arr[k]){
                cout << arr[i] << " < " << arr[j] << " < " << arr[k] << " at positions " << i << " < " << j << " < " << k << endl; 
                }
            }
        }
    }
    

}

int main(){
    int a1[]={1,3,9,2,5};
    int size = sizeof(a1)/sizeof(a1[0]);
    asc_trip(a1, size);
}