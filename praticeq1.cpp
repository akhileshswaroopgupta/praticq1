#include <iostream>
   
using namespace std;
void EvenOddSum(int arr[], int n )
{
    int even = 0;
    int odd = 0;
    int sum=0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            even += arr[i]*arr[i];
        else
            odd += arr[i]*arr[i]*arr[i];
    }
     sum= even+odd;
    cout << "Even index positions sum = " << even<<endl;
    cout << "Odd index positions sum = " << odd<<endl;
    cout << "Total  sum = " << sum<<endl;
}
int main()
{
    int arr[] = { 1, 5, 2, 3, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    EvenOddSum(arr, n);
    return 0;
}