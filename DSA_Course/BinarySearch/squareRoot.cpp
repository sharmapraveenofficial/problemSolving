#include <iostream>
#include <vector>

using namespace std;

float square_root(int N, int p)
{

    int s = 0;
    int e = N;
    float ans = 0;

    // Binary Search
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    // Linear Search

    float inc = 0.1;

    for (int place = 1; place <= p; place++)
    {
        while (ans * ans <= N)
        {

            ans += inc;
        }

        ans = ans - inc;

        inc = inc / 10.0;
    }
    return ans;
}

int main()
{
    int n = 10;
    int p = 3;

    cout << square_root(n, p) << endl;
    return 0;
}