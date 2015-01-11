#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    int found;
    cin >> s1 >> s2;
    found = s1.find(s2);

    if (found == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << found << endl;
    }
}
