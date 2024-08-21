//01expr22.cpp

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    double x = ((re-rp)*(xm-xe))/(sqrt((pow((xm-xe),2))+(pow((ym-ye), 2))));
    double y = ((re-rp)*(ym-ye))/(sqrt((pow((xm-xe),2))+(pow((ym-ye), 2))));
    cout << round(x+xe) << " " << round(y+ye);
    return 0;
}