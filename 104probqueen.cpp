#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<1||n>20){
        return 0;
    }
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='Q'){
                for(int k=0;k<(n-(j+1));k++){
                    if(a[i][j+k]==a[i][j]){
                        a[i][j] = '-';
                        // cout << a[i][j];
                        a[i][j+k] = '-'; 
                    }
                }
                for(int k=0;k<(n-j);k++){
                    if(a[i][j-k]=='Q'){
                        a[i][j] = '-';
                        a[i][j-k] = '-';
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}