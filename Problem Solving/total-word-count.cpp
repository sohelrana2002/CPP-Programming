#include <iostream>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);

    int count = 0;
    for (int i = 0; i <= sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            count++;
        }
    }

    cout << "Total word: " << count + 1;
}