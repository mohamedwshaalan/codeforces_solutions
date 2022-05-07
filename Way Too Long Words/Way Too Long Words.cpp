#include <iostream>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
using namespace std;
int main()
{

    int number;
    string word;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] << (word.size() - 2) << word[word.size() - 1];
            cout << endl;
        }
        else {
            cout << word;
            cout << endl;
        }
    }

}
