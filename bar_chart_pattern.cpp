#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

class HistogramGenerator
{
private:
    const int MAX_HEIGHT = 20;

    template <typename T>
    int getMaxValue(const map<T, int> &data)
    {
        int max = 0;
        for (const auto &pair : data)
        {
            if (pair.second > max)
                max = pair.second;
        }
        return max;
    }

public:
    map<int, int> collectWordLengths(const string &text)
    {
        map<int, int> lengths;
        istringstream iss(text);
        string word;

        while (iss >> word)
        {
            lengths[word.length()]++;
        }
        return lengths;
    }

    map<char, int> collectCharFrequencies(const string &text)
    {
        map<char, int> frequencies;
        for (char c : text)
        {
            if (!isspace(c))
            {
                frequencies[c]++;
            }
        }
        return frequencies;
    }

    template <typename T>
    void printHorizontalHistogram(const map<T, int> &data, const string &title)
    {
        cout << "\n"
             << title << ":\n";
        for (const auto &pair : data)
        {
            cout << pair.first << " | ";
            for (int i = 0; i < pair.second; i++)
            {
                cout << "*";
            }
            cout << " (" << pair.second << ")\n";
        }
    }

    template <typename T>
    void printVerticalHistogram(const map<T, int> &data, const string &title)
    {
        if (data.empty())
            return;

        cout << "\n"
             << title << ":\n";

        int maxFreq = getMaxValue(data);
        double scale = maxFreq > MAX_HEIGHT ? static_cast<double>(MAX_HEIGHT) / maxFreq : 1.0;

        for (int height = MAX_HEIGHT; height > 0; height--)
        {
            for (const auto &pair : data)
            {
                int scaledHeight = static_cast<int>(pair.second * scale);
                cout << (scaledHeight >= height ? "*  " : "   ");
            }
            cout << "\n";
        }

        for (const auto &pair : data)
        {
            if (is_same<T, char>::value)
            {
                cout << pair.first << "  ";
            }
            else
            {
                cout << pair.first << (pair.first < 10 ? "  " : " ");
            }
        }
        cout << "\n";
    }
};

void chart()
{
    HistogramGenerator generator;
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    auto wordLengths = generator.collectWordLengths(text);
    generator.printHorizontalHistogram(wordLengths,
                                       "Word Length Histogram (Horizontal)");
    generator.printVerticalHistogram(wordLengths,
                                     "Word Length Histogram (Vertical)");

    auto charFrequencies = generator.collectCharFrequencies(text);
    generator.printHorizontalHistogram(charFrequencies,
                                       "Character Frequency Histogram (Horizontal)");
    generator.printVerticalHistogram(charFrequencies,
                                     "Character Frequency Histogram (Vertical)");
}

int main()
{
    chart();
    return 0;
}
