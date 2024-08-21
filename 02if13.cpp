//12if13.cpp

#include<iostream>
#include<cmath>
// #include<vector>
using namespace std;
int main(){
    // vector<double> arr1;
    double a[5], minn=2147483647, maxx=0, sum=0;
    for(int i=0;i<4;i++){
        cin >> a[i];
    }

    for(int j=0;j<4;j++){
        if(a[j]<minn){
            minn = a[j];
        }
        if(a[j]>maxx){
            maxx = a[j];
        }
    }
    for(int i=0;i<4;i++){
        sum = sum+a[i];
    }
    double b = (sum-minn-maxx)/2;
    cout << round(b*100.0)/100;
    return 0;
}