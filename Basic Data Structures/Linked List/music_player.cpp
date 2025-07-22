#include <bits/stdc++.h>
using namespace std;

int main()
{

    // linked list
    list<string> playlist;

    // take input
    string song;
    while (cin >> song && song != "stop")
    {
        playlist.push_back(song);
    }

    // range based for loop to check the input
    // for (string song : playlist)
    // {
    //     cout << song;
    // }

    int q;
    cin >> q;

    auto current = playlist.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "play")
        {
            string songname;
            cin >> songname;

            auto is_found = find(playlist.begin(), playlist.end(), songname);

            if (is_found != playlist.end())
            {
                cout << "Playing " << *is_found << endl;
                current = is_found;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
        else if (cmd == "right")
        {
            if (next(current) != playlist.end())
            {
                current = next(current);
                cout << "Playing " << *current << endl;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
        else if (cmd == "left")
        {
            if (prev(current) != prev(playlist.begin()))
            {
                current = prev(current);
                cout << "Playing " << *current << endl;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
    }

    return 0;
}