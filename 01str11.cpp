//01str11.cpp

#include<iostream>
using namespace std;
int main(){
    // long a;
    // cin >> a;
    // cout << a;
    // char a= 2;
    // cout << a;
    // int b=a, sum;
    // for(int i=0;i<13;i++){
    // }
    string str1;
    int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n[11];
    cin >> str1;
    cout << str1.length() << endl;
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<9;j++){
            if(str1[i]==a[j]){
                n[i] = a[j];
                cout << n[i];
            }
        }
    }
    // for(int i=0;i<str1.length();i++){
    //     cout << n[i]<< endl;
    // }
}