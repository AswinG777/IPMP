#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void square_sum(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(pow(arr[i],2) + pow(arr[j],2) == pow(arr[k],2) ){
                cout << "Yes, " << arr[i] << "^2 + " << arr[j] << "^2 " << " = " << arr[k] << "^2" << endl; 
                break;
                }
            }
        }
    }
    

}

int main(){
    int a1[]={1,3,9,4,5};
    int size = sizeof(a1)/sizeof(a1[0]);
    square_sum(a1, size);
}