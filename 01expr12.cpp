//01expr12.cpp

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// float mon(float i, float j){
//     return (sqrt(i*j))/60;
// }

// float hay(float i, float j){
//     return 0.024265 * pow(i,0.5378) * pow(j,0.3964);
// }

// float boy(float i, float j){
//     return 0.0333 * pow(i,(0.6157-(0.0188*log10(i)))) * pow(j,0.3);
// }

int main(){
    double w,h;
    cin >> w >> h;
    // cout << setprecision(15) << mon(w,h) << endl << hay(w,h) << endl << boy(w,h) << endl;
    cout << setprecision(15) << (sqrt(w*h))/60 << endl;
    cout << setprecision(15) << 0.024265 * pow(w,0.5378) * pow(h,0.3964) << endl;
    cout << setprecision(15) << 0.0333 * pow(w,(0.6157-(0.0188*log10(w)))) * pow(h,0.3) << endl;

    return 0;

}