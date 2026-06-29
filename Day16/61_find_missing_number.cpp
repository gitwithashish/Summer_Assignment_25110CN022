#include <iostream>
using namespace std;

int main()
{
    int array[9] = {1, 2, 3, 4, 5, 6, 8, 9, 10};

    int ideal_sum = (10 * 11) / 2; // from sum to n numbers formula;

    int actual_sum = 0;

    for (int &x : array)
    {
        actual_sum += x;
    }
    cout << "the missing number is : " << ideal_sum - actual_sum;
    return 0;
}