#include <string>

class Animal
{
    protected:
        sdt::string nom;
        int age;
    public:
        Animal();
        Animal(const std::string&, int)
        virtual ~Animal()
        int getAge() const;
        std::string getNom() const;
        void Afficher(std::ostream);
};

class Mouton : public Animal
{
    private:
        std::string nom;
        int age;
        int poids;
    public:
        Mouton();
        Mouton(const std::string& "", int 0, int 0);
        ~Mouton();
        int getAge() const;
        int getPoids() const;
        std::string getNom() const;
        void Afficher(std::ostream);

};

class Vache : public Animal
{
    private:
        std::string nom;
        int age;
    public:
        Vache();
        Vache(const std::string& "", int 0, int 0);
        ~Animal();
        int getAge() const;
        std::string getNom() const;
        void Afficher(std::ostream);
};