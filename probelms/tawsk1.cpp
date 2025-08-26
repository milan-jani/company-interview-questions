//write a program to find x^n

#include <iostream>
using namespace std;

int pow(int x,int n) {
    if(n>0)
    return (n == 0) ? 1 : x * pow(x, n - 1);
    if(n<0)
    return (n == 0) ? 1 : 1 / (x * pow(x, -n - 1));
}

//func using divide and conquer
double func(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return func(a*a, n/2);
    else return a * func(a*a, n/2);
}


int main(){
    int x,n;
    cout<<"enter base";
    cin>>x;
    cout<<"enter power:";
    cin>>n;
    int result = 1;
    for(int i=0;i<n;i++){
        result *= x;
    }
    cout<<"Result using iterative app: "<<result<<endl;
    cout<<"result using recursive approach:"<<pow(x,n)<<endl;
    cout<<"result using divide and conquer:"<<func(x,n)<<endl;


}