#include <iostream>
using namespace std;

#define LL long long

int main()
{
  LL k, ans;

  cin >> k;

  for (LL i = 1; i <= k; i++)
  {
    LL u = i * i;
    ans = ((u) * (u - 1)) / 2 - (4 * (u - 3 * i + 2));
    cout << ans << "\n";
  }
}