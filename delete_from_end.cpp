#include <iostream>
using namespace std;
int deleteFromEnd(int A[], int n)
 {
    if (n <= 0) 
    {
        cout << "Error: Array is empty! " << endl;
        return 0;
    }
    return n - 1;
}

int main() {
    int A[10] = {10, 20, 30, 40};
    int n = 4;
    n = deleteFromEnd(A, n);

    cout << "Array after deleting from end: ";
    for (int i = 0; i < n; i++) 
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}