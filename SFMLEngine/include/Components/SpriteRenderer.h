#pragma once
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "ARendererComponent.h"

class SpriteRenderer : public ARendererComponent
{
public:
    SpriteRenderer();
    ~SpriteRenderer() override;

    // M�thodes pour g�rer la texture du sprite.
    void SetTexture(sf::Texture* _texture);
    void LoadTexture(const std::string& _texturePath);

    // M�thodes pour acc�der au sprite et � la texture.
    sf::Sprite* GetSprite() { return sprite; }
    sf::Texture* GetTexture() { return texture; }

    void SetSprite(sf::Sprite* _sprite) { sprite = _sprite; }

    void SetDefaultScale(float _scaleX, float _scaleY) { defaultScaleX = _scaleX; defaultScaleY = _scaleY; }

    void Update(float deltaTime) override;
    void Render(sf::RenderWindow* _window) override;

private:
    sf::Sprite* sprite = nullptr;
    sf::Texture* texture = nullptr; // Pointeur vers la texture.
    float defaultScaleX, defaultScaleY;
};
