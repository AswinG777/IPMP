#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void nonrep(vector<int> arr){
    int m = arr.size();
    sort(arr.begin(),arr.end());
    int i = 0;
    int c = 0;        
    while(i < m-2){
        int x = arr.at(i);
        if(arr.at(i+1) != x){
            cout << arr.at(i) << " ";
            c++;
            i++;
        }
        while(arr.at(i) == x){
            i++;  
        }
        if(c == 2){
            break;
        }
    }
        
    
}

int main(){
    vector<int> a1 = {1,5,2,1,3,5,3,4,3};
    nonrep(a1);
    return 0;
}