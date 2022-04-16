#include <map>
#include <string>
#include <vector>

using namespace std;

class Jouet;
class Catégorie;
class TrancheAge;

class Catalogue {

public :
	Catalogue(string , map<Jouet*, int>);
	Catalogue();
	~Catalogue();
	string getAnnee() const;
	int quantiteDistrib();
	map < Catégorie*, int> statCateg();

private : 
	string annee;
	map<Jouet*, int> LesJouets;
};

int Catalogue::quantiteDistrib()
{
	map < Jouet*, int >::iterator itr;
	int res = 0;
	for (auto itr = this->LesJouets.begin(); itr != this->LesJouets.end(); ++itr) {
		res += itr->second;	
	}
	return res;

}

map<Catégorie*, int> Catalogue::statCateg()
{
	return map<Catégorie*, int>();
}

class Catégorie;
class TrancheAge;

class Jouet 
{
public : 
	Jouet(int, string, Catégorie*, TrancheAge*);
	Jouet();
	~Jouet();
	int getNumero() const;
	string getlibelle() const;

private : 

	int Numero;
};

class Catégorie
{
public:
	Catégorie(int , string);
	Catégorie();
	~Catégorie();
	int getCode() const;
	string getlibelle() const;

private:
	int Code;
};

Catégorie::Catégorie(int, string)
{
}

Catégorie::Catégorie()
{
}

Catégorie::~Catégorie()
{
}

int Catégorie::getCode() const
{
	return 0		;
}

string Catégorie::getlibelle() const
{
	return string();
}


Jouet::Jouet(int, string, Catégorie *, TrancheAge *)
{
}

Jouet::Jouet()
{
}

Jouet::~Jouet()
{
} 

int Jouet::getNumero() const
{
	return 0;
}

string Jouet::getlibelle() const
{
	return string();
}

Catalogue::Catalogue(string, map<Jouet*, int>)
{
}

Catalogue::Catalogue()
{
}

Catalogue::~Catalogue()
{
}

string Catalogue::getAnnee() const
{
	return string();
}


