#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void verticalBarChart(vector<int> numbers)
{
    int maxHeight = *max_element(numbers.begin(), numbers.end());
    for (int height = maxHeight; height > 0; height--)
    {
        for (int num : numbers)
        {
            if (num >= height)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    vector<int> numbers = {6, 4, 3, 5};
    verticalBarChart(numbers);
    return 0;
}