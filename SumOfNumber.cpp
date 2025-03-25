#include <iostream>
#include <vector>
#include <numeric>  // For accumulate()
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    srand(time(0));

    for (int &num : arr) {
        num = rand() % 100000;
    }

    auto start = high_resolution_clock::now();
    int sum = accumulate(arr.begin(), arr.end(), 0);
    auto stop = high_resolution_clock::now();

    cout << "Sum of array elements: " << sum << endl;
    cout << "Time taken: " 
         << duration_cast<nanoseconds>(stop - start).count() 
         << " nanoseconds" << endl;

    return 0;
}
