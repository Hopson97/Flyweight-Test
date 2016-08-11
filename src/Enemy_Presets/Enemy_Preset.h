#ifndef ENEMY_PRESET_H
#define ENEMY_PRESET_H

#include "Enemy_Presets/Enemy_Preset_Enum.h"

#include "Sprite.h"

class Enemy_Preset
{
    public:
        Enemy_Preset( int maxHealth, const Texture& texture );

        static void initDatabase    ();
        static void clearDatabase   ();

        static Enemy_Preset& getPreset     ( Enemy_Preset_Name presetName );

        void draw ( const Vector2f& position );

    private:
        int maxHealth;

        Sprite m_sprite;

        //Other large data types
};






#endif // ENEMY_PRESET_H
