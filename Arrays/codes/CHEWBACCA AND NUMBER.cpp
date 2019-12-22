#include<iostream>

using namespace std;
int main() {
    long long int num;
    cin >> num;
    int n = 0;
    long long int a[20];
    while (num) {
        a[n] = num % 10;
        num /= 10;
        n++;
    }
    if(a[n-1]>=5 && a[n-1]!=9)
    a[n-1]=9-a[n-1];
    for (int i = 0; i < n-1; i++)
        if (a[i] >= 5)
            a[i] = 9 - a[i];
    for (int i = n - 1; i >= 0; i--)
        cout << a[i];
    return 0;
}
