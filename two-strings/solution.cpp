// https://www.hackerrank.com/challenges/two-strings

#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string a, b; 
        cin >> a >> b;

        if (a.length() > b.length()) 
            swap(a, b);

        array<int, 26> ca{};
        for (char &c : a)
            ca[c-'a']++;

        bool has_sub = false;
        for (char &c : b)
            if ((has_sub = ca[c-'a']))
                break;

        cout << (has_sub ? "YES" : "NO") << endl;
    }

    return 0;
}

