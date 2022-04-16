#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;


size_t compterLettre(char b, string &phrase)
{
    int i = 0;
	size_t count = 0;

	for (i = 0 ; i < phrase.size(); i++)
		if ( phrase[i ]== b)
			count++;

	return count;
}

int compterBTS(string chaine1, string chaine2)
{
    size_t taille = chaine2.size();
    string temp;
    size_t nbre = 0;

    temp = chaine2;

    while (taille != 0){


        if (strstr(temp.data(), chaine1.data()) != NULL){
            temp = strstr(temp.data(), chaine1.data());
            nbre++;
            temp[0] = '-';
            taille = temp.size();
        }
        else {
            taille = 0;
        }
    }

    return nbre;
}

int main() {

    string chaine1;
    char ch1 = 'b';
    string chaine2 = "bts";

    cout << "Entrez votre phrase : " << endl;
    getline (cin,chaine1);

    cout << "nombre de la lettre B :" << compterLettre(ch1, chaine1) << endl;

    size_t val = compterBTS(chaine2, chaine1);
    cout << "nombre de " << chaine2 << ": " << val << endl;


    string chaine1_reversed(chaine1);
    reverse(chaine1_reversed.begin(), chaine1_reversed.end());

    cout << "Phrase inversee : " << chaine1_reversed << endl;

    exit(EXIT_SUCCESS);
}
