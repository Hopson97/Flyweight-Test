#include "Sprite.h"

Sprite::Sprite( const Texture& texture  )
:   m_texture ( &texture )
{ }

void Sprite :: setPosition( const Vector2f& position )
{
    m_position = position;
}
