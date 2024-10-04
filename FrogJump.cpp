#include <bits/stdc++.h>
using namespace std;

// Recursive Function to calculate min cost
// to reach the n-th height
int minCost(vector<int> &h, int n)
{
    // If only one stair
    if (n == 1)
        return 0;

    // If only 2 stairs
    if (n == 2)
        return minCost(h, n - 1) + abs(h[n - 1] - h[n - 2]);

    return min(minCost(h, n - 1) + abs(h[n - 1] - h[n - 2]), 
               minCost(h, n - 2) + abs(h[n - 1] - h[n - 3]));
}

// Driver Code
int main()
{
    vector<int> h = {20, 30, 40, 20};
    cout << minCost(h, h.size());
    return 0;
}
