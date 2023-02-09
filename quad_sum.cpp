#include<bits/stdc++.h>

using namespace std;

void sum_quad(int arr[], int x, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==x){
                    cout << "Yes, " << arr[i] << " + " << arr[j] << " + " << arr[k] << " + " << arr[l] << " gives " << x << endl; 
                    break;
                    }
                }
            }
        }
    }
    

}

int main(){
    int a1[]={1,3,9,4,5,7,6};
    int size = sizeof(a1)/sizeof(a1[0]);
    int sum = 21;
    sum_quad(a1,sum,size);
}