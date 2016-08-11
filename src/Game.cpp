#include "Game.h"

#include <map>

static std::map<Texture_Name, Texture> textures;

Game::Game()
{
    Enemy_Preset::initDatabase();

    m_enemies.push_back( std::make_unique<Demon>() );
    m_enemies.push_back( std::make_unique<Demon>() );
    m_enemies.push_back( std::make_unique<Demon>() );
}

Game::~Game()
{
    Enemy_Preset::clearDatabase();
}


const Texture& Game::getTexture( Texture_Name textureName )
{
    return textures.at( textureName );
}

void Game::run()
{
    while ( true )
    {
        for ( auto& enemy : m_enemies )
        {
            enemy->update();
        }

        for ( auto& enemy : m_enemies )
        {
            enemy->draw();
        }
    }
}
