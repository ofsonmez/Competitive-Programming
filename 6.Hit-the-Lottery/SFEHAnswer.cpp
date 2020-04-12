#include <iostream>
using namespace std;

int main()
{
    unsigned int k{0};
    unsigned int n{1};

    cin >> n;

    while(n >= 100){
        n -= 100;
        k++;
    }

    while(n >= 20){
        n -= 20;
        k++;
    }

    while(n >= 10){
        n -= 10;
        k++;
    }

    while(n >= 5){
        n -= 5;
        k++;
    }

    while(n >= 1){
        n -= 1;
        k++;
    }

    cout << k;
}
