#include <iostream>
using namespace std;

int main()
{
    unsigned int n{1}, temp{0}, temp1{0};
    string a;

    cin >> n;
    cin >> a;

    for(unsigned int i{0}; i < n; i++){
        if(110 == a[i])
            temp++;
        if(122 == a[i])
            temp1++;
    }

    for(unsigned int k{0}; k < temp; k++)
        cout << "1 ";
    for(unsigned int l{0}; l < temp1; l++)
        cout << "0 ";
}
