#include<iostream>
using namespace std;
int main(){
char X;
cin >> X;

if(X>='a' && X<='z'){
    cout<< (char)(X-32) <<'\n';
}else{
    cout<< (char)(X+32) << '\n';
}
return 0;
}