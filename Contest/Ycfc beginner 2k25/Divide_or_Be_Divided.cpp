#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int num;
    cin >> num;

    vector<int> v;

    while (num > 0)
    {
        int digit = num % 10;
        v.insert(v.begin(), digit);
        num = num / 10;
    }

    if (( v[y - 1] % v[x - 1] == 0) || ( v[x - 1] % v[y - 1] == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}