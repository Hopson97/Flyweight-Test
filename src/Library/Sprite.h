#ifndef SPRITE_H
#define SPRITE_H

#include "Texture.h"
#include "Vector2.h"

class Sprite
{
    public:
        Sprite( const Texture& texture );

        void draw () { /*... */ }

        void setPosition ( const Vector2f& position );

    private:
        const Texture*  m_texture;

        Vector2f        m_position;


};

#endif // SPRITE_H
