#include "Game.h"

#include <map>

#include "Demon.h"
#include "Slime.h"

static std::map<Texture_Name, Texture> textures;

Game::Game()
{
    textures.insert( std::make_pair( Texture_Name::Demon, Texture() ) ); //"Demon texture", I would of course do this better in an actual program
    textures.insert( std::make_pair( Texture_Name::Slime, Texture() ) ); //"Slime texture", I would of course do this better in an actual program

    Enemy_Preset::initDatabase();

    m_enemies.push_back( std::make_unique<Demon>() );
    m_enemies.push_back( std::make_unique<Demon>() );
    m_enemies.push_back( std::make_unique<Demon>() );

    m_enemies.push_back( std::make_unique<Slime>() );
    m_enemies.push_back( std::make_unique<Slime>() );
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
    //main loop
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
        break;
    }
}
