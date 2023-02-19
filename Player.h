#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Vrag.h"

struct Player {
	sf::Texture texture;
	sf::Sprite sprite;
};
void playerInit(Player& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void playerUpdate(Player& obj) {
	if (obj.sprite.getPosition().x <= -4.f) {
		obj.sprite.setPosition(-4, obj.sprite.getPosition().y);
	}
	if (obj.sprite.getPosition().x >= WINDOW_WIDTH - 65.f) {
		obj.sprite.setPosition(WINDOW_WIDTH - 65, obj.sprite.getPosition().y);
	}
	if (obj.sprite.getPosition().x < 110.f || obj.sprite.getPosition().x > 410.f) {
		SpriteSpeedY = 1;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) { obj.sprite.move(-1, 0); }
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) { obj.sprite.move(1, 0); }
	}
	if (obj.sprite.getPosition().x >= 110.f && obj.sprite.getPosition().x <= 410.f) {
		SpriteSpeedY = 4;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) { obj.sprite.move(-2, 0); }
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) { obj.sprite.move(2, 0); }
	}
}

void playerDraw(sf::RenderWindow& window, Player& obj) {
	window.draw(obj.sprite);
}