#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void oddnums(vector<int> arr){
    int m = arr.size();
    sort(arr.begin(),arr.end());
    int i = 0;
    int n = 0;
    while(i < m){
        int c = 0;
        int x = arr.at(i);
        while(arr.at(i) == x){
            i++;
            c++;
        }
        if(c % 2 != 0){
            cout << x << " ";
            c = 0;
            n++;
        }
        if(n == 2){
            break;
        }
    }
}

int main(){
    vector<int> a1 = {1,5,2,1,3,2,5,3,3,4};
    oddnums(a1);
    return 0;
}