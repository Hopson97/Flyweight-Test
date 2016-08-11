#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>

#include "Enemy.h"

enum class Texture_Name
{
    Demon,
    Slime
};

class Game
{
    public:
        Game    ();
        ~Game   ();

        static const Texture& getTexture( Texture_Name textureName );

        void run ();

    private:
        std::vector<std::unique_ptr<Enemy>> m_enemies;
};

#endif // GAME_H
