#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

void least_pos(vector<int> arr){
    int m = arr.size();
    sort(arr.begin(),arr.end());
    int i = 0;       
    while(arr.at(i) <= 0){
        i++;
    }
    int min_pos = 1;
    while(arr.at(i) == min_pos){
        while(arr.at(i) == min_pos){
            i++;
        }
        min_pos++;
    }
    cout << min_pos << " is the least positive missing number." ;
        
    
}

int main(){
    vector<int> a1 = {1,5,-2,1,3,5,-3,4,3};
    least_pos(a1);
    return 0;
}