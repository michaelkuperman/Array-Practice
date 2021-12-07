// Find and print min, max, and the sum of integer array of 5 elements
#include <climits>
#include <iostream>
using namespace std;

int main()
{

    int array[5] = { 3, 27, 15, 33, 57 };
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    int i;

    for(i = 0; i < 5; i++) {
        sum = sum + array[i];
        if(array[i] < min) {
            min = array[i];
        }
        if(array[i] > max) {
            max = array[i];
        }
    }

    cout << min << endl;
    cout << max << endl;
    cout << sum << endl;

    return 0;
}
