#include <iostream>
using namespace std;

bool subset_sum(int* arr, int n, int sum)
{
    if (n == 0)
        return false;
    if (sum == 0)
        return true;

    if (arr[n - 1] <= sum)
        return subset_sum(arr, n - 1, sum - arr[n - 1]) || subset_sum(arr, n - 1, sum);
    else
        return subset_sum(arr, n - 1, sum);
}

int main()
{
    int n, sum;
    cout << "Enter the size of array  ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter array element ";
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    cout << "Enter the sum ";
    cin >> sum;

    subset_sum(arr, n, sum) ? cout << "Exist " : cout << "Not Exist ";
}
