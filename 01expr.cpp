//01expr.cpp

#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    cout << ((M_PI-((fact(10))/pow(8, 8)))+pow(log(9.7),(7/(sqrt(71))-sin(40*M_PI/180))))/pow(1.2,cbrt(2.3)) << endl;
    // cout << sin(30*M_PI/180);
    return 0;
}