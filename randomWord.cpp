#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    const string wordList[4] = { "icecream",
        "computer", "dictionary", "algorithm" };

    string word = wordList[rand() % 4];

    cout << word << endl;
}
