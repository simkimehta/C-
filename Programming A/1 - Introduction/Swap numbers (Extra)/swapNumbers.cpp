#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    a = a-b;
    b = b+a;
    a = b-a;

    cout << a << endl;
    cout << b << endl;
}
