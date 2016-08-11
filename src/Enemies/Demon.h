#ifndef DEMON_H
#define DEMON_H

#include "Enemy.h"

class Demon : public Enemy
{
    public:
        Demon();
        void update () override;

    protected:

    private:
};

#endif // DEMON_H
