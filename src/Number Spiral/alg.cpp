#include <iostream>
using namespace std;

#define LL long long

int main()
{
  LL n, a, b, ans;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;

    if (a > b)
    {
      if (a % 2 == 0)
      {
        ans = a * a;
        ans -= (b - 1);
      }
      else
      {
        ans = a * a - (a + a - 1);
        ans += b;
      }
    }
    else
    {
      if (b % 2 != 0)
      {
        ans = b * b;
        ans -= (a - 1);
      }
      else
      {
        ans = b * b - (b + b - 1);
        ans += a;
      }
    }

    cout << ans << "\n";
  }
}