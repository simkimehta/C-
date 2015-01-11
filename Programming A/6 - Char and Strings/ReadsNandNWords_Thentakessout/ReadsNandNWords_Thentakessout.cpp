#include <iostream>
using namespace std;

int main()
{
    //define variables
    int n,counter, found;
    string s1[100],s2,s3;
    //cin >> words from user and n;
    cin >> n;
    for(int counter = 0; counter<n; ++counter)
    {
        cin >> s1[counter];
    }
    cin >> s2;
    int thelength = s2.length();
    //cout << s << endl;
    cout << " " << endl;
    counter = 0;
    do
    {
        found = s1[counter].find(s2);
        s1[counter]=s1[counter].erase(found, thelength);
        cout << s1[counter] << endl; //takes word
        cout << found << endl;
        counter++;
    }
    while (counter < n);

}
