#include <iostream>
#include <cstdlib>
using namespace std;

// Corrected function signature for qsort()
int compare1(int a, int b)
{
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;
    if (num1 > num2)
        return 1;
    else if (num1 < num2)
        return -1;
    else
        return 0;
}

int compare2(int a, int  b)
{
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;
    if (num1 < num2)
        return 1;
    else if (num1 > num2)
        return -1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n]; // VLA (Allowed in some compilers, but not standard C++)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    // Corrected qsort() usage
    qsort(arr, 0, k, compare1);
    qsort(arr ,k+1, n - k, compare2);

    // Output sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
