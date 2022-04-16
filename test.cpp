#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;

size_t compterLettre(char b, string phrase)
{
    int i = 0;


    size_t count = 0;

    for (i = 0 ; i < phrase.size(); i++)
        if (phrase[i] == b)
            count++;

    return count;
}

int main() {
    char ch1 = 'b';
    string phrase;

    cout << "Entrez votre phrase : " << endl;
    getline (cin,phrase);

    cout << "nombre de la lettre B :" << compterLettre(ch1, phrase) << endl;

    exit(EXIT_SUCCESS);
}
