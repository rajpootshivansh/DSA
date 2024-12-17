#include <iostream>
using namespace std;


//fibonacchi
int f(int n)
{

    if (n <= 1)
    {
        return n;
    }
    else
    {
      int last=f(n-1);
      int slast=f(n-2);
      return last+slast;

    }
}

int main()
{

    int n;
    cin >> n;
    cout << f(n);
}