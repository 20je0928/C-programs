#include <bits/stdc++.h>
using namespace std;

void Decimal_To_Binary(int n)
{
    for(int i=31;i>=0;i--)
    {
        cout<<((n>>i) &1);
    }
    cout<<endl;
}

int main()
{
  int number;
  cin>>number;
  Decimal_To_Binary(number);
  
  return 0;
}
