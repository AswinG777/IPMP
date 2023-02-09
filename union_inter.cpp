#include<bits/stdc++.h>

using namespace std;

void uni(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    cout << "Union:  ";
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            cout << arr1[i++] << " ";
        }
        if(arr1[i] > arr2[j]){
            cout << arr2[j++] << " ";
        }
        else{
            cout << arr1[i++] << " ";
            j++;
        }
    }

    while(i < m){
        cout << arr1[i++] << " ";
    }

    while(j < n){
        cout << arr2[j++] << " "; 
    }
}

void inter(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    cout << "Intersection:  ";
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            i++;
        }
        if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            cout << arr1[i++] << " ";
            j++;
        }
    }

}

int main(){
    int a1[] = {1,2,5,8};
    int a2[] = {2,5,6,7,10};
    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);
    uni(a1,a2,m,n);
    cout << endl;
    inter(a1,a2,m,n);
}