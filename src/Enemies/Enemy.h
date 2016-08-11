#ifndef ENEMY_H
#define ENEMY_H

#include "../Enemy_Presets/Enemy_Preset.h"

#include "Vector2.h"

class Enemy
{
    public:
        Enemy( Enemy_Preset_Name presetName );

        virtual void update() = 0;

        void draw();


    private:
        Enemy_Preset& m_preset;

        Vector2f m_position;
};

#endif // ENEMY_H
