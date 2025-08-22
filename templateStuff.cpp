#include <iostream>
using namespace std;

template <class T>
T findSum(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

template <class T>
double findAverage(T arr[], int n) {
    T sum = findSum(arr, n);   
    return static_cast<double>(sum) / n;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = findSum(arr, n);
    double avg = findAverage(arr, n);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
