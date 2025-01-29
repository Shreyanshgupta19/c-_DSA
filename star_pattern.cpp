#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= (n - i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern4(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << "\n";
        space = space - 2;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
void pattern7(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
        if (i < n)
        {
            spaces = spaces - 2;
        }
        else
        {
            spaces = spaces + 2;
        }
    }
}
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "--";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*---";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int space, star;
        if (i <= n)
        {
            space = n - i;
            star = i;
        }
        else
        {
            space = i - n;
            star = 2 * n - i;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

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

int power(int value, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result = result * value;
    }
    return result;
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int dashCount = power(2, n - i) - 1;
        int starCount = power(2, i - 1);

        for (int j = 1; j <= dashCount; j++)
        {
            cout << "-";
        }
        for (int j = 1; j <= starCount; j++)
        {
            cout << "*";
            for (int j = 1; j <= 2 * dashCount + 1; j++)
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    cout << "1" << endl;
    pattern1(n);
    cout << "2" << endl;
    pattern2(n);
    cout << "3" << endl;
    pattern3(n);
    cout << "4" << endl;
    pattern4(n);
    cout << "5" << endl;
    pattern5(n);
    cout << "6" << endl;
    pattern6(n);
    cout << "7" << endl;
    pattern7(n);
    cout << "8" << endl;
    pattern8(n);
    cout << "9" << endl;
    pattern9(n);
    cout << "10" << endl;
    pattern10(n);
    cout << "11" << endl;
    pattern11(n);
    cout << "12" << endl;
    pattern12(n);
    cout << "13" << endl;
    pattern13(n);
    cout << "14" << endl;
    vector<int> numbers = {6, 4, 3, 5};
    verticalBarChart(numbers);
    cout << "15" << endl;
    pattern15(n);
    return 0;
}
