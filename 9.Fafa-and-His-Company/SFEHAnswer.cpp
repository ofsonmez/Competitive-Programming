#include <iostream>
using namespace std;

int main()
{

    unsigned int n{2}, temp{0};

    cin >> n;

    for(int i{1}; i < n; i++){
        if((n - i) % i == 0)
            temp++;
    }
    cout << temp;
}
