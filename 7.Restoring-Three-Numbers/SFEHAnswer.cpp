#include <iostream>
using namespace std;

int main()
{
    unsigned int x1{2}, x2{2}, x3{2}, x4{2};
    unsigned int temp{0}, k1{0}, k2{0}, k3{0};

    cin >> x1 >> x2 >> x3 >> x4;

    temp = x1 >= x2 ? x1 : x2;
    temp = temp >= x3 ? temp : x3;
    temp = temp >= x4 ? temp : x4;

    if( temp == x1){
        k1 = x2;
        k2 = x3;
        k3 = x4;
    }

    if( temp == x2){
        k1 = x1;
        k2 = x3;
        k3 = x4;
    }

    if( temp == x3){
        k1 = x2;
        k2 = x1;
        k3 = x4;
    }

    if( temp == x4){
        k1 = x2;
        k2 = x3;
        k3 = x1;
    }

    x3 = temp - k1;
    x2 = temp - k2;
    x1 = temp - k3;

    cout << x1 << " " <<  x2 << " " << x3;

}
