#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max_coins = INT_MIN;

    // if i press twice
    int first_press_a = a;
    int second_press_a = a - 1;
    int mx_c_a = first_press_a + second_press_a;

    int first_press_b = b;
    int second_press_b = b - 1;
    int mx_c_b = first_press_b + second_press_b;

    // if i press both button once
    int mx_c_both = a + b;

    if (mx_c_a > max_coins)
    {
        max_coins = mx_c_a;
    }
    if (mx_c_b > max_coins)
    {
        max_coins = mx_c_b;
    }

    if (mx_c_both > max_coins)
    {
        max_coins = mx_c_both;
    }

    cout << max_coins;

    return 0;
}