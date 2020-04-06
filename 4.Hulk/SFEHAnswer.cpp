#include <iostream>
using namespace std;

int main()
{
    unsigned short n{1};
    string s1{"I hate"};
    string s2{"I love"};
    string s3{" that "};

    cin >> n;

    while( n > 0) {
        if( n == 1){
            cout << s1;
            break;
        }
        cout << s1 << s3;
        n--;
        if ( n == 0)
            break;
        if ( n == 1){
            cout << s2;
            break;
        }
        cout << s2 << s3;
        n--;
        if ( n == 0)
            break;
    }
        cout << " it";
}
