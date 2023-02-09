#include<bits/stdc++.h>

using namespace std;

void sum_trip(int arr[], int x, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==x){
                cout << "Yes, " << arr[i] << " + " << arr[j] << " + " << arr[k] << " gives " << x << endl; 
                break;
                }
            }
        }
    }
    

}

int main(){
    int a1[]={1,3,9,4,5};
    int size = sizeof(a1)/sizeof(a1[0]);
    int sum = 12;
    sum_trip(a1,sum,size);
}