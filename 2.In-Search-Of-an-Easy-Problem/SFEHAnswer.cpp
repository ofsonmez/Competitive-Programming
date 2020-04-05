#include <iostream>
using namespace std;

int main()
{
    unsigned short n{1},k{0},t{0};

    cin >> n;

    for(int i{0}; i < n; i++) {
        cin >> k;
        if(k == 1){
            t++;
        }
    }
    t == 0 ? cout << "EASY": cout << "HARD";
}
