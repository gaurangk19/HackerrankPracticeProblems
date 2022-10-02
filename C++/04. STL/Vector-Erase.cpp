/*
-- # Problem Link : https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
-- # Problem : Maps-STL
-- # Language : C++
-- # Subdomain : STL
-- # Max Score : 15
-- # Difficulty : Easy
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, x, a, b;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    cin >> x;
    cin >> a >> b;
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (auto x : v)
        cout << x << " ";
    return 0;
}