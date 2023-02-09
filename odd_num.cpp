#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void oddnum(vector<int> arr){
    int m = arr.size();
    sort(arr.begin(),arr.end());
    int i = 0;
    while(i < m){
        int c = 0;
        int x = arr.at(i);
        while(arr.at(i) == x){
            i++;
            c++;
        }
        if(c % 2 != 0){
            cout << x;
            break;
        }
    }
}

int main(){
    vector<int> a1 = {1,5,2,1,3,2,5,3,3};
    oddnum(a1);
    return 0;
}