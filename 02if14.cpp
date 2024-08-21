//02if14.cpp

#include<iostream>
using namespace std;
int main(){
    string str1, str2, final="None";
    double gpax1, gpax2;
    char com1, com2, cal11, cal12, cal21, cal22;

    cin >> str1 >> gpax1 >> com1 >> cal11 >> cal21;
    cin >> str2 >> gpax2 >> com2 >> cal12 >> cal22;

    bool a1 = com1=='A'&&cal11<='C'&&cal21<='C';
    bool b1 = com2=='A'&&cal12<='C'&&cal22<='C';

    string a2{com1, cal11, cal21};
    string b2{com2, cal12, cal22};

    // cout << a2;

    if(a1||b1 == false){
        cout << final;
        return 0;
    }else if(a1||b1 == true){
        if(gpax1==gpax2){
            if(a2>b2){
                final = str1;
            }else if(a2<b2){
                final = str2;
            }else if(a2==b2){
                final = "Both";
            }
        }else if(gpax1>gpax2){
            final = str1;
        }else if(gpax1<gpax2){
            final = str2;
        }
    }
    cout << final;

    // if(com1=='A'&&(cal11=='C'||cal11=='B'||cal11=='A')&&(cal21=='C'||cal21=='B'||cal21=='A')&&
    // com2=='A'&&(cal12=='C'||cal12=='B'||cal12=='A')&&(cal22=='C'||cal22=='B'||cal22=='A')){
    //     final = str2;
    // // }else if(com2=='A'&&cal12=='C'&&cal12=='B'&&cal12=='A'&&cal22=='C'&&cal22=='B'&&cal22=='A'){
    // //     final = str1;
    // }else{
    //     cout << final;
    //     return 0;
    // }

    cout << final;
}