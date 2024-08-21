//02if15.cpp

#include<iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    if(a[0]=='0'&&(a[1]=='6'||a[1]=='8'||a[1]=='9')&&a.length()==10){
        cout << "Mobile number";
        return 0;
    }
    cout << "Not a mobile number";
    return 0;
}