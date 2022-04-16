#include <map>
#include <string>
#include <vector>

using namespace std;

class Jouet;
class Cat�gorie;
class TrancheAge;

class Catalogue {

public :
	Catalogue(string , map<Jouet*, int>);
	Catalogue();
	~Catalogue();
	string getAnnee() const;
	int quantiteDistrib();
	map < Cat�gorie*, int> statCateg();

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

map<Cat�gorie*, int> Catalogue::statCateg()
{
	return map<Cat�gorie*, int>();
}

class Cat�gorie;
class TrancheAge;

class Jouet 
{
public : 
	Jouet(int, string, Cat�gorie*, TrancheAge*);
	Jouet();
	~Jouet();
	int getNumero() const;
	string getlibelle() const;

private : 

	int Numero;
};

class Cat�gorie
{
public:
	Cat�gorie(int , string);
	Cat�gorie();
	~Cat�gorie();
	int getCode() const;
	string getlibelle() const;

private:
	int Code;
};

Cat�gorie::Cat�gorie(int, string)
{
}

Cat�gorie::Cat�gorie()
{
}

Cat�gorie::~Cat�gorie()
{
}

int Cat�gorie::getCode() const
{
	return 0		;
}

string Cat�gorie::getlibelle() const
{
	return string();
}


Jouet::Jouet(int, string, Cat�gorie *, TrancheAge *)
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


