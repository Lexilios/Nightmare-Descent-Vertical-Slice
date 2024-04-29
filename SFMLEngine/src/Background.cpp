#include "Background.h"

void Background::SetPath(const std::string& _path)
{
    path = _path;

    if (!texture.loadFromFile(path))
    {
        return;
        // Vous pouvez �galement choisir de lancer une exception ici
    }

    if (!image.loadFromFile(path))
    {
        return;
        // Vous pouvez �galement choisir de lancer une exception ici
    }

    sprite.setTexture(texture);
}

void Background::SetSize(sf::RenderWindow* window)
{
    if (texture.getSize().x > 0 && texture.getSize().y > 0) // Pour �viter une division par z�ro
    {
        float scaleX = static_cast<float>(window->getSize().x) / texture.getSize().x;
        float scaleY = static_cast<float>(window->getSize().y) / texture.getSize().y;
        sprite.setScale(scaleX, scaleY);
    }
}
