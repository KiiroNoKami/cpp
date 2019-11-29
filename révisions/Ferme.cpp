#inlude "Ferme.hpp"
#include <iostream>


Animal::Animal() : nom(""), age(0)
{

}

Animal::Animal(const std::string& nom, int age) : _nom(nom), _age(age)
{

}

Animal::~Animal()
{

}

int Animal::getAge() const
{
    return _age;
}

std::string Animal::getNom() const
{
    return _nom;
}

void Animal::Afficher(std::ostream flux)
{
    flux << "Nom : " << _nom << " / Age : " << _age << std::endl;
}

std::ostream & operator<<(std::ostream flux, Animal const &a)
{
  flux << a.Afficher(flux);
  return flux;
}

//-------Mouton--------


Mouton::Mouton() : nom(""), age(0), poids(0)
{

}

Mouton::Mouton(const std::string& nom, int age, int poids) : Animal(nom, age), _poids(poids)
{

}

Mouton::~Mouton()
{

}

int Mouton::getAge() const
{
    return _age;
}

int Mouton::getPoids() const
{
    return _poids;
}

std::string Mouton::getNom() const
{
    return _nom;
}

void Mouton::Afficher(std::ostream flux)
{
    flux << "Nom : " << _nom << " / Age : " << _age << " / Poids_Laine : " << _poids << std::endl;
}

std::ostream & operator<<(std::ostream & flux, Mouton const &m)
{
  flux << m.Afficher(flux);
  return flux;
}


//-------Vache---------


Vache::Vache() : nom(""), age(0)
{

}

Vache::Vache(const std::string& nom, int age) : Animal(nom, age)
{

}

Vache::~Vache()
{

}

int Vache::getAge() const
{
    return _age;
}

std::string Vache::getNom() const
{
    return _nom;
}

void Vache::Afficher(std::ostream flux)
{
    flux << "Nom : " << _nom << " / Age : " << _age << std::endl;
}

std::ostream & operator<<(std::ostream & flux, Vache const &v)
{
  flux << v.Afficher(flux);
  return flux;
}