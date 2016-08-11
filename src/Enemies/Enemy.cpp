#include "Enemy.h"


Enemy :: Enemy ( Enemy_Preset_Name presetName )
:   m_preset ( Enemy_Preset::getPreset( presetName ) )
{
    //ctor
}

void Enemy::draw()
{
    m_preset.draw( m_position );
}
