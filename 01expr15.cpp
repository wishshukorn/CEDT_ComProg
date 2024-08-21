//01expr15.cpp

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x;
    cin >> x;
    cout << round(((pow(x,(sqrt(log((x+1)*(x+1))))))/(10-x))*1e6)/1e6;
    return 0;

}