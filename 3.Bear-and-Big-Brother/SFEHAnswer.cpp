#include <iostream>
using namespace std;

int main()
{
    unsigned short a{1},b{1},c{0};

    cin >> a >> b;
    while( a <= b ){
        a*=3;
        b*=2;
        c++;
    }
    cout << c;
}
