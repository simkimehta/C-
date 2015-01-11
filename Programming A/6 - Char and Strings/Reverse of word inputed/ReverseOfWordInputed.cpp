#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int theLength = str.length();
    //cout << theLength << endl;
    do
    {
        cout << str[theLength];
        theLength = theLength - 1;
    }
    while (theLength != -1);
        cout << " " << endl;
}
