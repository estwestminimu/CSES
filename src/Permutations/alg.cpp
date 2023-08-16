#include <iostream>
using namespace std;

#define LL long long

int main()
{
  LL n;
  cin >> n;
  if (n < 4 && n != 1)
  {
    cout << "NO SOLUTION";
  }
  else
  {

    for (int i = 2; i <= n; i++)
    {
      if (i % 2 == 0)
      {
        cout << i << " ";
      }
    }

    for (int i = 1; i <= n; i++)
    {
      if (i % 2 != 0)
      {
        cout << i << " ";
      }
    }
  }
}