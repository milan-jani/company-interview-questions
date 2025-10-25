//karatsuba
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long long karatsuba(long long x, long long y) {
    if(x<10 or y<10) return x*y;
    int n=max(to_string(x).length(), to_string(y).length());
    long long half = (n) / 2;
    long long power = pow(10, half);
   // if (n == 1) return x * y;
    long long a = x / power;
    long long b = x % power;
    long long c = y / power;
    long long d = y % power;
    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long abcd = karatsuba(a + b, c + d) - ac - bd;
    return ac * pow(10, 2 * half) + (abcd  * pow(10,half))  + bd;
}
int main() {
    long long x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Product: " << karatsuba(x, y) << endl;
    

    return 0;
}