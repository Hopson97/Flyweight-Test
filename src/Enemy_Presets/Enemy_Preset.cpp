#include "Enemy_Preset.h"

#include <map>
#include <memory>
#include <iostream>

#include "Demon_Preset.h"
#include "Slime_Preset.h"

#include "Game.h"

namespace
{
    /*
     *  Demon Preset
     */
    class Demon_Preset : public Enemy_Preset
    {
        public:
            Demon_Preset()
            :   Enemy_Preset ( 10, Game::getTexture( Texture_Name::Demon ) )
            {}
    };

    /*
     *  Slime Preset
     */
    class Slime_Preset : public Enemy_Preset
    {
        public:
            Slime_Preset()
            :   Enemy_Preset ( 4, Game::getTexture( Texture_Name::Slime ) )
            {}
    };

    std::map<Enemy_Preset_Name, std::unique_ptr<Enemy_Preset> > presets;
}

Enemy_Preset :: Enemy_Preset( int maxHealth, const Texture& texture )
:   m_sprite ( texture )
{

}


//Static
void Enemy_Preset :: initDatabase    ()
{
    presets.insert( std::make_pair( Enemy_Preset_Name::Demon, std::make_unique<Demon_Preset>() ) );
    presets.insert( std::make_pair( Enemy_Preset_Name::Slime, std::make_unique<Slime_Preset>() ) );
}

//Static
void Enemy_Preset :: clearDatabase   ()
{
    presets.clear();
}

//Static
Enemy_Preset& Enemy_Preset :: getPreset ( Enemy_Preset_Name presetName )
{
    return *presets.at( presetName );
}

void Enemy_Preset :: draw ( const Vector2f& position )
{
    m_sprite.setPosition ( position );
    m_sprite.draw();
}
