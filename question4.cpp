#include<iostream>
using namespace std;
bool odd(int n){
    if(n%2==1){
        return true;
    }
    else{
        return false;

    }
    
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        bool y=odd(i);
        if(y==true){
            cout<<i<<" ";
        }
    }

return 0;
}