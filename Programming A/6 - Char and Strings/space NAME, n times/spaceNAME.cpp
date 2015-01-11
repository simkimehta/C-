#include<iostream>
using namespace std;

int main()
{
    string name;
    int n,counter;
    cin >> name;
    cin >> n;
    counter = 0;
    cout << name << endl;
    do
    {
        counter = counter + 1;
        name = " " + name;
        cout << name <<endl;
    }
    while (counter < n - 1);
}
