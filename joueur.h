#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>

#include "casino.h"


class Joueur : public Casino
{
    public:
        Joueur();
        std::string nom;
        int nbJetons=100;

        virtual ~Joueur();


    protected:

    private:
};

#endif // JOUEUR_H
