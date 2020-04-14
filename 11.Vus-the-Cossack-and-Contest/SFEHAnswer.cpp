#include <iostream>
using namespace std;

int main()
{
    unsigned short n{1}, m{1}, k{1};

    cin >> n >> m >> k;

    if( m >= n && k >= n)
        cout << "YES";
    else
        cout << "NO";
}
