#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extended_euclid(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);

    if (g != 1) {
        return -1; // không tồn tại
    }

    return (x % m + m) % m;
}

int main() {
    int a, m;
    cout << "Nhap a va m: ";
    cin >> a >> m;

    int result = mod_inverse(a, m);

    if (result == -1)
        cout << "Khong ton tai nghich dao modulo" << endl;
    else
        cout << "Modulo inverse: " << result << endl;

    return 0;
}
