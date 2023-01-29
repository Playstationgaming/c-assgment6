#include<iostream>
using namespace std;
bool prime(int n){
    bool raj=true;
    for(int i=2;i<=n-1;i++){
if(n%i==0){
    raj=false;
}
    }
    return raj;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        bool y=prime(i);
if(y==true){
cout<<i<<" ";
}
    }
return 0;
}