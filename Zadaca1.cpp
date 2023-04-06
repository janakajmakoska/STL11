#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of m: ";
    cin >> m;
    cout << setw(m) << "i" << setw(m) << "i^2" << setw(m) << "i^3" << endl;
    for (int i = 1; i <= n; i++) {
        cout << setw(m) << i << setw(m) << fixed << setprecision(2) << pow(i, 2) << setw(m) << fixed << setprecision(2) << pow(i, 3) << endl;
    }
    return 0;
}
