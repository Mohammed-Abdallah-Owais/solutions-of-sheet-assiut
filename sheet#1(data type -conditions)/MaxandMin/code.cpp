#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();

    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    if (a < min)
        min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    cout << min << " " << max;
    return 0;
}