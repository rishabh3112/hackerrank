#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if(n==0){
        return 1;
    }
    n = n*factorial(n-1);
    return n;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result = factorial(n);
    cout << result << "\n";
    return 0;
}
