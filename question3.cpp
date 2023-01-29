#include<iostream>
using namespace std;
string vote(int n){
    if(n>17){
        return "yes";
    }
else{
    return "No";
}
}
int main(){
    int n;
    cin>>n;
    string y=vote(n);
    cout<<y;
return 0;
}