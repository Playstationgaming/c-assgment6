#include<iostream>
using namespace std;
float area(int n){
 

float pie=3.14;
float area;
area=pie*n*n;
return area;

}
float circum(int n){
float pie=3.14;
float cir;
cir=2*pie*n;
return cir;

}
int main(){
    int n;
    cin>>n;
    float a=area(n);
    float b=circum(n);
cout<<"Area: "<<a<<endl;
cout<<"Circumference: "<<b;
return 0;
}
