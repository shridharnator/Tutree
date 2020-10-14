#include "checkstring.h"

void stringchecker::permute(string a, int l, int r, string mega)
{

    if (l == r) {
        findstr(a, mega);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r, mega);
            swap(a[l], a[i]);
        }
    }
}

void stringchecker::findstr(string s, string mega)
{
    int pos = 0;
    int index;
    while ((index = mega.find(s, pos)) != string::npos) {
        cout << "Match found at position: " << index << endl;
        pos = index + 1;
    }
}
