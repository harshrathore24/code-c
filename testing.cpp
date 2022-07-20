#include<iostream>
using namespace std;

//check automorphic
bool isAutomorphic(int n){
    int sq = n*n;
    while(n>0){
        if(n%10!=sq%10)
            return 0;
        n/=10;sq/=10;
    }
    return 1;
}
//main
int main(){
    int n;
    cout<<"Enter a number to check automorphic : ";
    cin>>n;
    cout<<(isAutomorphic(n)?"\nAutomorphic":"\nNot Automorphic");
    return 0;
}

