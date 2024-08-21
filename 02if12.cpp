//02if12.cpp

#include<iostream>
using namespace std;
int main(){
    double a;
    cin >> a;
    if(a>=80){
        cout << "A";
    }else if(a>=70){
        cout << "B";
    }else if(a>=60){
        cout << "C";
    }else if(a>=50){
        cout << "D";
    }else{
        cout << "F";
    }
    return 0;
}