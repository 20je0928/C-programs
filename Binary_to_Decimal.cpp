#include <bits/stdc++.h>
using namespace std;
int toDecimal(int number)
{
    int i = 0;
    int sum = 0;
    while (number != 0) {
        int d = number % 10;
        sum += d * pow(2, i);
        number = number / 10;
        ++i;
    }
    return sum;
}
int main()
{
    int binary;
    cout << "\nEnter Binary Number\t:\t";
    cin >> binary;
    cout << "\nDecimal Equivalent\t:\t" << toDecimal(binary) << endl;
    return 0;
}
