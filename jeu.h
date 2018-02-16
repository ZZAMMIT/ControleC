#ifndef JEU_H
#define JEU_H

#include "casino.h"


class Jeu : public Casino
{
    public:
        Jeu();
        int mise;
        virtual ~Jeu();

    protected:

    private:
};

#endif // JEU_H
