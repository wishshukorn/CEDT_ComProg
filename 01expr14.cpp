//01expr14.cpp

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int y = (n-543)%100;
    // cout << (y+(y/4)+11)%7;
    cout << ((y/4)+y+11)%7;
    return 0;
}