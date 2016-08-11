#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>


#include "Enemy_Presets/Enemy_Preset.h"
#include "Enemy.h"
#include "Game.h"

#include "Demon.h"

#include "Texture.h"

enum class Texture_Name
{
    Demon
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
