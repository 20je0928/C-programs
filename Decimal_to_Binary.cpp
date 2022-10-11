#include <bits/stdc++.h>
using namespace std;
int toBinary(int number)
{  
    for(int i=31;i>=0;i--)
    {
        cout<<((n>>i) &1);
    }
    cout<<endl;
}
int main()
{
    int decimal;
    cin >> decimal;
    toBinary(decimal);
    return 0;
}
Footer
© 2022 GitHub, Inc.
