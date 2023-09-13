#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i = 0;i < 5; i++) cin >> a[i];
    int max = a[0], min = a[0];
    for(int i = 0;i < 5; i++) {
        if (a[i] > max) swap (a[i],max);
    }
    for(int i = 0;i < 5; i++) {
        if (a[i] < min) swap (a[i],min);
    }
    cout << min + max;
}