#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;
    cout << "Introduce int, long, character, float and double separated by spaces" <<endl;
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    //print float with only 3 decimals and double with 9
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i, l, ch, f, d);
    return 0;
}
