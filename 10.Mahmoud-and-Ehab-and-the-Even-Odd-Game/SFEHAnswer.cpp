#include <iostream>
using namespace std;

int main()
{
    unsigned int n{1};

    cin >> n;

    if(n == 1 || n % 2 != 0)
        cout << "Ehab";

    if( n % 2 == 0)
        cout << "Mahmoud";
}
