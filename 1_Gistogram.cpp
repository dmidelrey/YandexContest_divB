#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    map <char, int> mapping;
    int max_char=0;
    while (getline(cin,s))
    {
        for (char elem: s)
        {
            if (elem==' ') continue;
            mapping[elem]++;
            if (max_char <= mapping[elem]) max_char=mapping[elem];
        }
    }

    for (int i=max_char-1; i>=0; i--)
        {
            for (auto& elem: mapping)
                {
                    if (elem.second<=i) cout<<' ';
                    else cout<<'#';
                }
                cout<<endl;
        }
    for (auto& elem: mapping)
                {
                    cout<<elem.first;
                }
}
