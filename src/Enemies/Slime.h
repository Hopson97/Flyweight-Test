#ifndef SLIME_H
#define SLIME_H

#include "Enemy.h"

class Slime : public Enemy
{
    public:
        Slime();
        void update () override;

    protected:

    private:
};

#endif // SLIME_H
