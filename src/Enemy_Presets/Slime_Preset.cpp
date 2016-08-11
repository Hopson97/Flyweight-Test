#include "Slime_Preset.h"

#include "Game.h"

Slime_Preset::Slime_Preset()
:   Enemy_Preset ( 4, Game::getTexture( Texture_Name::Slime ) )
{
    //ctor
}
