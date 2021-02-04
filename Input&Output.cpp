#include <cmath>
#include <cstdio>
#include<iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1, num2, num3, result, first;
    cin>> num1 >> num2 >> num3;
    first = suma(num1, num2);
    result = suma(first, num3);
    cout<< result << endl;
    return 0;
}
