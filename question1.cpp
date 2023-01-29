#include<iostream>
using namespace std;
int square(int n){
    int c=n*n;
    return c;
}
int main(){
    for(int i=1;i<=5;i++){
        int y=square(i);
    cout<<" "<<y;
    }
return 0;
}