//02if16.cpp

#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a==0){
        cout << "zero" << endl;
    }else if(a<0){
        cout << "negative" << endl;
    }else{
        cout << "positive" << endl;
    }
    if(a%2==0){
        cout << "even";
    }else{
        cout << "odd";
    }
    return 0;
}