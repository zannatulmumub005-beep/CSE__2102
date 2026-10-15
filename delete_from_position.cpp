#include <iostream>
using namespace std;
int deleteFromPosition(int A[], int n, int pos)
{
   if (n <= 0) {
        cout << "Error: Array is empty!"<< endl;
        return 0;
    }
    if (pos < 0 || pos >= n) {
        cout << "Error: Invalid position!" << endl;
        return n;
    }
    for (int j = pos + 1; j < n; j++) {
        A[j - 1] = A[j];
    }
    return n - 1;
}

int main() {
    int A[10] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int pos = 2;
    n = deleteFromPosition(A, n, pos);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    
}