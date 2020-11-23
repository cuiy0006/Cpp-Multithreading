#include <iostream>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::steady_clock::now();

    int sign = 1;
    double pi = 0;
    for(int i = 0; i < 1E10; ++i){
        pi += sign * (1.0 / (i * 2 + 1));
        sign = -sign;
    }
    pi *= 4;
    cout << pi << endl;

    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << duration << endl;
}