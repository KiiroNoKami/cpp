#include "Ferme.hpp"

#include <string>
#include <iostream>

int main(int, char**)
{
    Animal a1();
    Animal a2("Nanimo", 4);
	Mouton m1();
	Mouton m2("moutmout", 1,5);
	Vache v1();
    Vache v2("meumeuh", 3);


	std::cout << a2.getNom() << std::endl;
	std::cout << m2.getPoids() << std::endl;
	std::cout << v2.getAge() << std::endl;


	m2.afficher();

    Animal monMouton = new mouton("animouton", 2, 10);
    monMouton->Afficher(std::cout);

    return 0;
}