#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a+b == c || c+b == a || a+c == b)
    {
        cout << "Product of 2" << endl;
    }
    else
    {
        cout << "Not a product of 2" << endl;
    }
}
