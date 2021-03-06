// https://www.hackerrank.com/challenges/the-time-in-words

#include <iostream>
#include <string>

using namespace std;

string ntos(const int &n)
{
    switch (n)
    {
    case 1:  return "one";
    case 2:  return "two";
    case 3:  return "three";
    case 4:  return "four";
    case 5:  return "five";
    case 6:  return "six";
    case 7:  return "seven";
    case 8:  return "eight";
    case 9:  return "nine";
    case 10: return "ten";
    case 11: return "eleven";
    case 12: return "twelve";
    case 13: return "thirteen";
    case 15: return "fifteen";
    case 18: return "eighteen";

    case 14:
    case 16:
    case 17:
    case 19: return ntos(n-10) + "teen";
    case 20: return "twenty";
    case 21 ... 29: return "twenty " + ntos(n-20);
    }
    return string();
}

int main()
{
    int h, s;
    cin >> h >> s;

    if (s == 0)
        cout << ntos(h) << " o' clock" << endl;
    else if (s == 30)
        cout << "half past " << ntos(h) << endl;
    else
    {
        bool past = s < 30;
        if (!past)
        {
            h++;
            s = 60-s;
        }

        if (s == 15)
            cout << "quarter ";
        else
            cout << ntos(s) << " minute" << (s == 1 ? " " : "s ");

        cout << (past ? "past " : "to ") << ntos(h) << endl;
    }

    return 0;
}

