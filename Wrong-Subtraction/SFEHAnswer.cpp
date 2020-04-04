#include <iostream>
using namespace std;

int main() {
    unsigned short k{1};
    int n{2};

    cin >> n >> k;

    for(int i{0}; i < k; i++) {
        if( n % 10 == 0) {
            n /= 10;
        }
        else {
            n -= 1;
        }
    }

    cout << n;
}
