#include <iostream>
using namespace std;

int main()
{
    unsigned short q{1};
    unsigned int n{2};

    cin >> q;

    unsigned int k[q];

    for(unsigned int i{0}; i < q; i++){
        cin >> n;
        if(n == 2){
            k[i] = 2;
            continue;
        }
        if(n % 2 == 0)
            k[i] = 0;
        else
            k[i] = 1;
    }

    for( unsigned int l{0}; l < q; l++){
        cout << k[l] << endl;
    }
}
