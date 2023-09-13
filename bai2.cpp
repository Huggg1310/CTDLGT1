#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if (x1==x2 && x3==x4 && x1!=x3) {
        cout <<"NO";
        return 0;
    }
    if (y1==y2 && y3==y4 && y1!=y4) {
        cout <<"NO";
        return 0;
    }
    if (x1==x2 && x3==x4 && x1==x3) {
        cout <<"MANY";
        return 0;
    }
    if (y1==y2 && y3==y4 && y1==y4) {
        cout <<"MANY";
        return 0;
    }
    float a1=(y2-y1)/(x2-x1),b1=y1-x1*(y2-y1)/(x2-x1);
    float a2=(y4-y3)/(x4-x3),b2=y3-x3*(y4-y3)/(x4-x3);
    if(a1==a2 && b1!=b2) cout <<"NO";
    else if (a1=a2 && b1==b2) cout<<"MANY";
}