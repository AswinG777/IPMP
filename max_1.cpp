#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void max_1(int arr[3][3]){
    int max_1 = 0, r; 
    for(int i=0; i<3; i++){
        int c = 0;
        for(int j=0; j<3; j++){            
            if(arr[i][j] == 1){
                c++;
            }            
        }
        if(c > max_1){
            max_1 = c;
            r = i + 1;
        }
    }    
    cout << "Maximum number of " << max_1 << " 1s are in the " << r << "th row" << endl;
}

int main(){
    int a1[3][3]={{0,1,1},{0,0,1},{1,1,1}};
    
    max_1(a1);
}