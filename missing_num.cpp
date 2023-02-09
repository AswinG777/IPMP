#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void missnum(vector<int> arr){
    int m = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0; i < m; i++){
        if(arr.at(i) != i+1){
            cout << i+1;
            break;
        }
    }
}

int main(){
    vector<int> a1 = {1,5,2,6,3};
    missnum(a1);
    return 0;
}