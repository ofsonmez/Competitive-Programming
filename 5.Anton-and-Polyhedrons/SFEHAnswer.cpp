#include <iostream>
using namespace std;

int main()
{

    string k;
    unsigned int n{1}, sum{0};
    string T{"Tetrahedron"};
    string C{"Cube"};
    string O{"Octahedron"};
    string D{"Dodecahedron"};
    string I{"Icosahedron"};

    cin >> n;

    while( n > 0){
        cin >> k;
        if( k == T)
            sum += 4;
        if( k == C)
            sum += 6;
        if( k == O)
            sum += 8;
        if( k == D)
            sum += 12;
        if( k == I)
            sum += 20;
        n--;
    }

    cout << sum;
}
